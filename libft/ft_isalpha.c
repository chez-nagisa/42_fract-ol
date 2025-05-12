/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:27:51 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 15:55:26 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
// 	int	i;

// 	if (argc != 2)
// 	{
// 		printf("Please put a single character.");
// 		return (1);
// 	}
// 	i = argv[1][0];
// 	if (ft_isalpha(i))
// 	{
// 		printf("%c is an alphabet character.\n", i);
// 	}
// 	else
// 	{
// 		printf("%c is not an alphabet character.\n", i);
// 	}
// 	return (0);
// }
