/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:00:01 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 17:07:50 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char			i[] = "bonjour";
// 	char			j[] = "bonnejournee";
// 	unsigned int	n;
// 	int				result;

// 	n = 3;
// 	result = ft_strncmp(i, j, n);
// 	printf("%d\n", result);
// 	return (0);
// }
