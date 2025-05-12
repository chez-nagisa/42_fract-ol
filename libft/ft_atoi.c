/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:24 by nhara             #+#    #+#             */
/*   Updated: 2024/11/08 21:04:13 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				sign;
	long long int	result;

	result = 0;
	sign = 1;
	while (is_whitespace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (sign == 1 && result > (LONG_MAX - (*nptr - '0')) / 10)
			return (-1);
		if (sign == -1 && result > (LONG_MAX - (*nptr - '0')) / 10)
			return (0);
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * sign));
}

// int	main(int argc, char **argv)
// {
// 	int result;
// 	int result2;

// 	if (argc == 2)
// 	{
// 		result = ft_atoi(argv[1]);
// 		result2 = atoi(argv[1]);
// 		printf("%d\n", result);
// 		printf("%d\n", result2);
// 	}
// 	else
// 	{
// 		printf("Please put numbers.");
// 	}
// 	return (0);
// }
