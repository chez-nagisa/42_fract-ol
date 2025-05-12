/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:29:44 by nhara             #+#    #+#             */
/*   Updated: 2025/05/07 17:57:32 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	zoom(t_fractal *f, double factor)
{
	double	center_r;
	double	center_i;
	double	range_r;
	double	range_i;

	center_r = (f->min_r + f->max_r) / 2;
	center_i = (f->min_i + f->max_i) / 2;
	range_r = (f->max_r - f->min_r) * factor / 2;
	range_i = (f->max_i - f->min_i) * factor / 2;
	f->min_r = center_r - range_r;
	f->max_r = center_r + range_r;
	f->min_i = center_i - range_i;
	f->max_i = center_i + range_i;
	f->color_shift += 0.015;
	if (f->color_shift > 1.0)
		f->color_shift -= 1.0;
}

int	close_handler(t_fractal *f)
{
	mlx_destroy_image(f->mlx, f->img.img_ptr);
	mlx_destroy_window(f->mlx, f->win);
	mlx_destroy_display(f->mlx);
	free(f->mlx);
	exit(0);
}

static void	handle_movement(int key, t_fractal *f)
{
	double	r;
	double	i;

	r = (f->max_r - f->min_r) * 0.1;
	i = (f->max_i - f->min_i) * 0.1;
	if (key == XK_Up)
	{
		f->min_i += i;
		f->max_i += i;
	}
	else if (key == XK_Down)
	{
		f->min_i -= i;
		f->max_i -= i;
	}
	else if (key == XK_Left)
	{
		f->min_r -= r;
		f->max_r -= r;
	}
	else if (key == XK_Right)
	{
		f->min_r += r;
		f->max_r += r;
	}
}

static void	handle_zoom(int key, t_fractal *f)
{
	if (key == XK_equal)
	{
		zoom(f, 0.9);
		f->max_iter += 5;
	}
	else if (key == XK_minus)
	{
		zoom(f, 1.1);
		if (f->max_iter > 50)
			f->max_iter -= 5;
	}
}

int	key_handler(int key, t_fractal *f)
{
	if (key == XK_Escape)
		close_handler(f);
	else
	{
		handle_movement(key, f);
		handle_zoom(key, f);
	}
	fractal_render(f);
	return (0);
}
