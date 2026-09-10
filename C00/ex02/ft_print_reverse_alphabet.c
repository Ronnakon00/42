/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 00:28:07 by ronny             #+#    #+#             */
/*   Updated: 2026/07/08 01:13:30 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;
	int		num;	

	a = 'z';
	i = 0;
	num = 25;
	while (i <= num)
	{
		write(1, &a, 1);
		a--;
		i++;
	}
}
