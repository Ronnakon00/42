/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 02:02:10 by ronny             #+#    #+#             */
/*   Updated: 2026/07/22 16:25:20 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	check_and_len(int min, int max)
{
	int	count;
	int	temp;

	count = 0;
	temp = min;
	if (min >= max)
		return (0);
	while (temp < max)
	{
		count++;
		temp++;
	}
	return (count);
}

int	*ft_range(int min, int max)
{
	int	*dest;
	int	size;
	int	i;

	i = 0;
	size = check_and_len(min, max);
	if (size == 0)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	*res;
// 	int	i;
// 	res = ft_range(-3, 5);
// 	i = 0;
// 	while (i < (-3 - 5))
// 	{
// 		printf("%d ", res[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(res);
// 	return (0);
// }