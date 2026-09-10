/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:25:00 by ronny             #+#    #+#             */
/*   Updated: 2026/07/16 17:13:48 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main()
// {
// 	int x;
// 	x = ft_fibonacci(6);	
// 	printf("%d",x);
// }
// 6
// 5 4
// 4 3 | 3 2
// 3 2 | 2 1 | 2 1 | 1 0
// 2 1 | 1 0 | 1 0 1 | 1 0 1 | 1 0
// 1 0 1 | 1 0 | 1 0 1 | 1 0 1 | 1 0