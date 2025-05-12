/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:22:28 by nhara             #+#    #+#             */
/*   Updated: 2025/03/13 15:27:27 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(const char *s, char c)
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
