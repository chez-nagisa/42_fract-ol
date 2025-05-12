/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:33:47 by nhara             #+#    #+#             */
/*   Updated: 2024/11/10 22:53:26 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[] = "bonappetit";
// 	int			c;
// 	char		*result;

// 	c = '\0';
// 	result = ft_strrchr(str, c);
// 	if (result)
// 		printf("%c is found. %s\n", c, result);
// 	else
// 		printf("%c is not found.", c);
// 	return (0);
// }
