/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:54:39 by nhara             #+#    #+#             */
/*   Updated: 2025/05/01 09:54:39 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

double	map(double value, t_range r)
{
	return ((r.new_max - r.new_min) * (value - r.old_min)
		/ (r.old_max - r.old_min) + r.new_min);
}

t_complex	add_complex(t_complex z1, t_complex z2)
{
	t_complex	r;

	r.x = z1.x + z2.x;
	r.y = z1.y + z2.y;
	return (r);
}

t_complex	square_complex(t_complex z)
{
	t_complex	r;

	r.x = z.x * z.x - z.y * z.y;
	r.y = 2 * z.x * z.y;
	return (r);
}

double	atoi_double(char *s)
{
	int		sign;
	long	int_part;
	double	frac_part;
	double	decimal_weight;

	int_part = 0;
	frac_part = 0;
	sign = 1;
	decimal_weight = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	while (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign = -sign;
	while (*s != '.' && *s)
		int_part = (int_part * 10) + (*s++ - '0');
	if (*s == '.')
		s++;
	while (*s)
	{
		decimal_weight /= 10;
		frac_part = frac_part + (*s++ - '0') * decimal_weight;
	}
	return ((int_part + frac_part) * sign);
}
