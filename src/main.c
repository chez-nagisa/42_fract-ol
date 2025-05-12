/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:54:29 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:54:29 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	print_usage_and_exit(void)
{
	char	*msg;

	msg = "Please enter\n"
		"\t\"./fractol mandelbrot\"\n"
		"\t\"./fractol julia <value_1> <value_2>\"\n"
		"\t\"./fractol burningship\"\n";
	ft_putstr_fd(msg, STDERR_FILENO);
	exit(1);
}

static int	is_valid_double(const char *s)
{
	int	i;
	int	dot;

	i = 0;
	dot = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == '.')
		{
			if (dot)
				return (0);
			dot = 1;
		}
		else if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static void	handle_args(t_fractal *f, int ac, char **av)
{
	if (ac == 2 && ft_strncmp(av[1], "mandelbrot", 10) == 0)
		f->set = MANDELBROT;
	else if (ac == 4 && ft_strncmp(av[1], "julia", 5) == 0
		&& is_valid_double(av[2]) && is_valid_double(av[3]))
	{
		f->set = JULIA;
		f->julia_r = atoi_double(av[2]);
		f->julia_i = atoi_double(av[3]);
	}
	else if (ac == 2 && ft_strncmp(av[1], "burningship", 11) == 0)
		f->set = BURNING_SHIP;
	else
		print_usage_and_exit();
}

int	main(int ac, char **av)
{
	t_fractal	f;

	handle_args(&f, ac, av);
	fractal_init(&f);
	data_init(&f);
	events_init(&f);
	fractal_render(&f);
	mlx_loop(f.mlx);
	return (0);
}
