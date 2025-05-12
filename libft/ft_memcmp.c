/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:47:55 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 17:09:00 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	ptr1[] = "abd";
// 	const char	ptr2[] = "abc";
// 	size_t		num;
// 	int			result;

// 	num = 3;
// 	result = ft_memcmp(ptr1, ptr2, num);
// 	if (result == 0)
// 		printf("str1 and str2 are equal.\n");
// 	else if (result > 0)
// 		printf("str1 is greater than str2.\n");
// 	else
// 		printf("str1 is less than str2.\n");
// 	return (0);
// }
