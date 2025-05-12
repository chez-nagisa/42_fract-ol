/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:21:50 by nhara             #+#    #+#             */
/*   Updated: 2024/10/27 15:36:23 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char c;
// 	char result;
// 	c = 'A';
// 	result = ft_tolower(c);
// 	printf("Before %c\n", c);
// 	printf("After %c\n", result);
// 	return (0);
// }