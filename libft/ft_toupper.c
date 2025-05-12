/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:13:29 by nhara             #+#    #+#             */
/*   Updated: 2024/10/27 15:36:54 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char c;
// 	char result;
// 	c = 'a';
// 	result = ft_toupper(c);
// 	printf("Before %c\n", c);
// 	printf("After %c\n", result);
// 	return (0);
// }