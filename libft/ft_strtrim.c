/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:50:34 by nhara             #+#    #+#             */
/*   Updated: 2024/10/30 22:40:05 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_s1;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	trimmed_s1 = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trimmed_s1)
		return (NULL);
	if (end > start)
	{
		ft_memcpy(trimmed_s1, s1 + start, end - start);
	}
	trimmed_s1[end - start] = '\0';
	return (trimmed_s1);
}

// int	main(void)
// {
// 	const char test[] = "   Bonjour";
// 	const char set[] = "our";

// 	char *result = ft_strtrim(test, set);
// 	if (!result)
// 		printf("Allocation failed.\n");
// 	else
// 	{
// 		printf("Original: '%s\nTrimmed: %s\n", test, result);
// 		free(result);
// 	}
// 	return (0);
// }