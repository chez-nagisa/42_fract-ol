/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:25 by nhara             #+#    #+#             */
/*   Updated: 2024/11/13 16:58:13 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copy;

	i = 0;
	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
// int	main(void)
// {
// 	const char org[] = "chien";
// 	char *copy;

// 	copy = ft_strdup(org);

// 	if (copy == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", org);
// 	printf("Copy: %s\n", copy);
// 	free(copy);
// 	return (0);
// }