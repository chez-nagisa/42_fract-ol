/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:21:54 by nhara             #+#    #+#             */
/*   Updated: 2024/11/10 22:00:51 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "COUCOU";
// 	char	dest[10];

// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("Destination %s\n", dest);
// 	return (0);
// }

// //example ofsegmentation fault
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*src;
// 	char	dest[10];

// 	src = NULL;
// 	memcpy(dest, src, 5);
// 	printf("Destination: %s\n", dest);
// 	return (0);
// }

// //example ofsegmentation fault
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[10] = "Hello";
// 	char *dst = NULL;

// 	memcpy(dst, src, 5);

// 	printf("Destination: %s\n", dst);
// 	return (0);
// }