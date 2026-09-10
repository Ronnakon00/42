/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:01:49 by ronny             #+#    #+#             */
/*   Updated: 2026/07/09 16:03:26 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp[size];
	int	i;
	int	c;
	int	cc;
	int	max;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[i];
		i++;
	}
	c = size - 1;
	while (c >= 0)
	{
		i = size - 1;
		max = temp[0];
		while (i >= 0)
		{
			if (temp[i] > max)
				max = temp[i];
			i--;
		}
		cc = size - 1;
		while (cc >= 0)
		{
			if (temp[cc] == max)
			{
				temp[cc] = '\0';
				break ;
			}
			cc--;
		}
		tab[c] = max;
		c--;
	}
}

// int	main(void)
// {
// 	int	s[] = {1, 2, 5, 4, 8,1,2,1};
// 	int	i;

// 	ft_sort_int_tab(s, 8);

// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("%d ", s[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	return (0);
// }