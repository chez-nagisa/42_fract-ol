/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:12:34 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 15:56:01 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(int argc, char **argv)
// {
// 	int i;

// 	if (argc != 2)
// 	{
// 		printf("Please put a single number.");
// 		return (1);
// 	}
// 	i = argv[1][0];
// 	if (ft_isdigit(i))
// 	{
// 		printf("%c is a number.\n", i);
// 	}
// 	else
// 	{
// 		printf("%c is not a number.\n", i);
// 	}
// 	return (0);
// }