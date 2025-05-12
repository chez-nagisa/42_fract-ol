/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:28:02 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 16:08:53 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	int		i;
// 	char	buffer[10];

// 	ft_memset(buffer, '4', sizeof(buffer));
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%c ", buffer[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
