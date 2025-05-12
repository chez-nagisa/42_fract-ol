/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:08:08 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 15:57:26 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isprint is the function to see whether a character is printable or not.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	i;

// 	i = '\n';
// 	if (ft_isprint(i))
// 	{
// 		printf("%c is printable.\n", i);
// 	}
// 	else
// 	{
// 		printf("%c is not printable.\n", i);
// 	}
// 	i = 65;
// 	if (ft_isprint(i))
// 	{
// 		printf("%c is printable.\n", i);
// 	}
// 	else
// 	{
// 		printf("%c is not printable.\n", i);
// 	}
// 	return (0);
// }
