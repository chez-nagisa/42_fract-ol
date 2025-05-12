/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:52:01 by nhara             #+#    #+#             */
/*   Updated: 2024/11/04 21:23:42 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy(str + s1_len, s2, s2_len + 1);
	return (str);
}
// int	main(void)
// {
// 	char s1[] = "Bonjour, ";
// 	char s2[] = "chat.";
// 	char *result;
// 	result = ft_strjoin(s1, s2);
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
