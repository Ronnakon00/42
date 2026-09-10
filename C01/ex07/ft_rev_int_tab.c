/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:58:51 by ronny             #+#    #+#             */
/*   Updated: 2026/07/09 14:36:36 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = size / 2;
	while (i != 0)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = tmp;
		i--;
	}
}

// int main(){
// 	int s[] = {1,2,3,4,5};
// 	ft_rev_int_tab(s,5);
// 	for(int i = 0; i<5 ;i++){
// 		printf("%d",s[i]);	
// 	}
// }