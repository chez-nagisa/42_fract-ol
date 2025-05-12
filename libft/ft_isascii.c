/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:34:03 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 15:57:10 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	i;

// 	i = 32;
// 	if (ft_isascii(i))
// 	{
// 		printf("%c is in the ASCII range.\n", i);
// 	}
// 	else
// 	{
// 		printf("%c is not in the ASCII range.\n", i);
// 	}
// 	return (0);
// }
