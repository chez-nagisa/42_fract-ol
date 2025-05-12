/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:54:48 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:54:48 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static int	get_color(int iter, int max_iter, double color_shift)
{
	double	t;
	int		r;
	int		g;
	int		b;

	if (iter == max_iter)
		return (0x000000);
	t = (double)iter / max_iter;
	t += color_shift;
	t -= (int)t;
	r = (int)(5 * (1 - t) * t * t * t * 255);
	g = (int)(20 * (1 - t) * (1 - t) * t * t * 255);
	b = (int)(150 + 100 * t);
	return ((r << 16) | (g << 8) | b);
}

static void	put_pixel(int x, int y, t_img *img, int color)
{
	int	offset;

	offset = (y * img->line_len) + (x * (img->bpp / 8));
	*(unsigned int *)(img->pixels_ptr + offset) = color;
}

static void	mandelbrot_or_julia(int x, int y, t_fractal *f,
	t_point_pair *p)
{
	t_range	rx;
	t_range	ry;

	rx.old_min = 0;
	rx.old_max = WIDTH;
	rx.new_min = f->min_r;
	rx.new_max = f->max_r;
	ry.old_min = 0;
	ry.old_max = HEIGHT;
	ry.new_min = f->max_i;
	ry.new_max = f->min_i;
	if (f->set == MANDELBROT || f->set == BURNING_SHIP)
	{
		p->z.x = 0;
		p->z.y = 0;
		p->c.x = map(x, rx);
		p->c.y = map(y, ry);
	}
	else if (f->set == JULIA)
	{
		p->z.x = map(x, rx);
		p->z.y = map(y, ry);
		p->c.x = f->julia_r;
		p->c.y = f->julia_i;
	}
}

static void	draw_pixel(int x, int y, t_fractal *f)
{
	t_point_pair	p;
	t_complex		z;
	t_complex		c;
	int				i;
	int				color;

	i = 0;
	mandelbrot_or_julia(x, y, f, &p);
	z = p.z;
	c = p.c;
	while ((z.x * z.x + z.y * z.y) <= 4 && i < f->max_iter)
	{
		if (f->set == BURNING_SHIP)
		{
			z.x = fabs(z.x);
			z.y = fabs(z.y);
		}
		z = add_complex(square_complex(z), c);
		i++;
	}
	color = get_color(i, f->max_iter, f->color_shift);
	put_pixel(x, y, &f->img, color);
}

void	fractal_render(t_fractal *f)
{
	int	x;
	int	y;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			draw_pixel(x, y, f);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(f->mlx, f->win, f->img.img_ptr, 0, 0);
}
