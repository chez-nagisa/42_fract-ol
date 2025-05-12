/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:05:57 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 17:01:30 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char dest[6];
// 	char src[] = "bonjour";
// 	unsigned int i;

// 	i = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("%s\n", dest);
// 	printf("%d\n", i);
// 	return (0);
// }