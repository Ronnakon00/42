/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:38:04 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/13 18:57:19 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			return (val);
		}
		i++;
	}
	if (s1[i] == '\0')
	{
		val = s1[i] - s2[i];
	}
	return (val);
}

// int main (void)
// {
//     char a[] = "green";
//     char b[] = "greenhouse";
//     int x;
//     x = ft_strcmp(a,b);
//     printf("%d" ,x);
// }