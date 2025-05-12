/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:25:54 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 15:15:58 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = 0;
	return (result);
}

// char	toupper_wrapper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (char)ft_toupper((int)c);
// }
// int	main(void)
// {
// 	char	s[] = "Au Revoir";
// 	char	*result;

// 	result = ft_strmapi(s, toupper_wrapper);
// 	if (result)
// 	{
// 		printf("Toupper: %s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Allocation failed.\n");
// 	return (0);
// }
