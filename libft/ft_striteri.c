/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:10:41 by nhara             #+#    #+#             */
/*   Updated: 2024/11/05 13:07:41 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	toupper_wrapper(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = ft_tolower(*c);
// }

// int	main(void)
// {
// 	char	s[] = "Au Revoir";

// 	ft_striteri(s, toupper_wrapper);
// 	printf("%s\n", s);
// 	return (0);
// }
