/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:25:01 by nhara             #+#    #+#             */
/*   Updated: 2024/11/10 23:21:31 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*little))
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	big[] = "Bonjour";
// 	const char	little[] = "r";
// 	size_t		len;
// 	char		*result;

// 	len = 6;
// 	result = ft_strnstr(big, little, len);
// 	if (result != NULL)
// 		printf("%s\n", result);
// 	else
// 		printf("'%s' not found.\n", little);
// 	return (0);
// }
