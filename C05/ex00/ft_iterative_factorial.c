/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:05:40 by ronny             #+#    #+#             */
/*   Updated: 2026/07/16 15:56:04 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
    	return (0);
	while(nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return result;
}

// int main()
// {
// 	int x;
// 	x = ft_iterative_factorial(1);	
// 	printf("%d",x);
// }