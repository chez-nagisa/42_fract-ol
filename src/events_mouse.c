/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:54:09 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:54:09 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	mouse_handler(int btn, int x, int y, t_fractal *f)
{
	(void)x;
	(void)y;
	if (btn == Button4)
	{
		zoom(f, 0.9);
		f->max_iter += 5;
	}
	else if (btn == Button5)
	{
		zoom(f, 1.1);
		if (f->max_iter > 50)
			f->max_iter -= 5;
	}
	fractal_render(f);
	return (0);
}

int	julia_track(int x, int y, t_fractal *f)
{
	t_range	rx;
	t_range	ry;

	if (f->set != JULIA)
		return (0);
	rx.old_min = 0;
	rx.old_max = WIDTH;
	rx.new_min = f->min_r;
	rx.new_max = f->max_r;
	ry.old_min = 0;
	ry.old_max = HEIGHT;
	ry.new_min = f->min_i;
	ry.new_max = f->max_i;
	f->julia_r = map(x, rx);
	f->julia_i = map(y, ry);
	fractal_render(f);
	return (0);
}
