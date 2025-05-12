/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:37:44 by nhara             #+#    #+#             */
/*   Updated: 2025/03/13 15:26:33 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = 0;
	return (str);
}

static char	**free_memory(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = copy_word(s, c);
			if (!result[i])
				return (free_memory(result, i));
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;
// 	char	*str;
// 	char	delimiter;

// 	str = "comment,allez,vous,?";
// 	delimiter = ',';
// 	result = ft_split(str, delimiter);
// 	if (result == NULL)
// 	{
// 		printf("Failed to split the string.\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
