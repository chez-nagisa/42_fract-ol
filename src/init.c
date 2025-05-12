/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:54:20 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:54:20 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	malloc_error(void)
{
	perror("malloc failed");
	exit(1);
}

void	fractal_img_init(t_fractal *f)
{
	f->img.img_ptr = mlx_new_image(f->mlx, WIDTH, HEIGHT);
	if (!f->img.img_ptr)
	{
		mlx_destroy_window(f->mlx, f->win);
		mlx_destroy_display(f->mlx);
		free(f->mlx);
		malloc_error();
	}
	f->img.pixels_ptr = mlx_get_data_addr(f->img.img_ptr, &f->img.bpp,
			&f->img.line_len, &f->img.endian);
	if (!f->img.pixels_ptr)
	{
		mlx_destroy_image(f->mlx, f->img.img_ptr);
		mlx_destroy_window(f->mlx, f->win);
		mlx_destroy_display(f->mlx);
		free(f->mlx);
		malloc_error();
	}
}

void	fractal_init(t_fractal *f)
{
	f->mlx = mlx_init();
	if (!f->mlx)
		malloc_error();
	f->win = mlx_new_window(f->mlx, WIDTH, HEIGHT, "fractol");
	if (!f->win)
	{
		mlx_destroy_display(f->mlx);
		free(f->mlx);
		malloc_error();
	}
	fractal_img_init(f);
}

void	data_init(t_fractal *f)
{
	if (f->set == MANDELBROT)
	{
		f->min_r = -2.0;
		f->max_r = 1.0;
	}
	else if (f->set == JULIA)
	{
		f->min_r = -1.5;
		f->max_r = 1.5;
	}
	else if (f->set == BURNING_SHIP)
	{
		f->min_r = -2.0;
		f->max_r = 1.5;
	}
	f->max_i = 1.5;
	f->min_i = f->max_i - (f->max_r - f->min_r) * HEIGHT / WIDTH;
	f->max_iter = 51;
}

void	events_init(t_fractal *f)
{
	mlx_hook(f->win, KeyPress, KeyPressMask, key_handler, f);
	mlx_hook(f->win, ButtonPress, ButtonPressMask, mouse_handler, f);
	mlx_hook(f->win, DestroyNotify, StructureNotifyMask, close_handler, f);
	mlx_hook(f->win, MotionNotify, PointerMotionMask, julia_track, f);
}
