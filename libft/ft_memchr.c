/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:21:36 by nhara             #+#    #+#             */
/*   Updated: 2024/11/10 23:05:45 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char ptr[] = "Coucou";
// 	int value;
// 	char *result;

// 	value = 'c';
// 	result = ft_memchr(ptr, value, ft_strlen(ptr));

// 	if (result != NULL)
// 		printf("'%c' is found. %s", value, result);
// 	else
// 		printf("'%c' is not found.", value);
// 	return (0);
// }