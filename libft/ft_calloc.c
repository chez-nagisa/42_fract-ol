/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:00:51 by nhara             #+#    #+#             */
/*   Updated: 2024/10/29 16:07:56 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	i = 0;
// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	while (i < 5)
// 	{
// 		printf("arr[%d] = %d\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
