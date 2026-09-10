/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:15:26 by ronny             #+#    #+#             */
/*   Updated: 2026/07/16 15:55:57 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{   
    int result;

    result = 1;
    if (power < 0)
        return (0);
    while (power != 0)
    {
        result = result * nb;
        power--;
    }
    return (result);
}

// int main()
// {
// 	int x;
// 	x = ft_iterative_power(3,-3);	
// 	printf("%d",x);
// }