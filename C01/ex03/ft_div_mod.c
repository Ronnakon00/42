/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:24:41 by ronny             #+#    #+#             */
/*   Updated: 2026/07/09 12:33:25 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(){
//     int	div;
// 	int	mod;

// 	ft_div_mod(17, 5, &div, &mod);

// 	printf("div = %d\n", div);
// 	printf("mod = %d\n", mod);
// }