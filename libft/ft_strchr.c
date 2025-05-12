/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:57:24 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 17:05:45 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[] = "Salut";
// 	int			c;
// 	char		*result;

// 	c = 'a';
// 	result = ft_strchr(str, c);
// 	if (result)
// 		printf("%c is found. %s\n", c, result);
// 	else
// 		printf("%c is not found.", c);
// 	return (0);
// }
