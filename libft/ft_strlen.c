/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:48:50 by nhara             #+#    #+#             */
/*   Updated: 2024/11/30 20:58:50 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		len;

// 	str = "hello";
// 	len = ft_strlen(str);
// 	printf("長さ %d", len);
// 	return (0);
// }
