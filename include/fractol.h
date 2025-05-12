/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:53:36 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:53:36 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft.h"
# include <mlx.h>
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>
# include <stdlib.h>
# include <unistd.h>
# define MANDELBROT 1
# define JULIA 2
# define BURNING_SHIP 3
# define WIDTH 800
# define HEIGHT 800

typedef struct s_complex
{
	double	x;
	double	y;
}	t_complex;

typedef struct s_img
{
	void	*img_ptr;
	char	*pixels_ptr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_range
{
	double	old_min;
	double	old_max;
	double	new_min;
	double	new_max;
}	t_range;

typedef struct s_point_pair
{
	t_complex	z;
	t_complex	c;
}	t_point_pair;

typedef struct s_fractal
{
	int		set;
	void	*mlx;
	void	*win;
	t_img	img;
	double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	double	julia_r;
	double	julia_i;
	int		max_iter;
	double	color_shift;
}	t_fractal;

void		fractal_init(t_fractal *f);
void		data_init(t_fractal *f);
void		events_init(t_fractal *f);
void		fractal_render(t_fractal *f);
void		zoom(t_fractal *f, double factor);
int			key_handler(int key, t_fractal *f);
int			mouse_handler(int btn, int x, int y, t_fractal *f);
int			close_handler(t_fractal *f);
int			julia_track(int x, int y, t_fractal *f);
double		map(double value, t_range r);
t_complex	add_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
double		atoi_double(char *s);

#endif
