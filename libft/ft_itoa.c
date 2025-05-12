/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:50:05 by nhara             #+#    #+#             */
/*   Updated: 2024/11/08 20:32:41 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	len = ft_numlen(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	len--;
	str[len] = '0' + (num % 10);
	return (str);
}

// int	main(void)
// {
// 	int		num;
// 	char	*str;

// 	// Check with -2147483648, 0, 2147483647
// 	num = -2147483648;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("%s\n", str);
// 		free(str);
// 	}
// 	return (0);
// }
