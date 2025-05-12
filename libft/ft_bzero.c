/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:53:52 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 17:36:20 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

// int	main(void)
// {
// 	int i;
// 	char buffer[10] = "Bonjour";

// 	ft_bzero(buffer, 5);
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", buffer[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }