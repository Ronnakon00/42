/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 22:53:21 by ronny             #+#    #+#             */
/*   Updated: 2026/07/13 10:34:00 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*s;

	s = dest;
	while (n != 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n != 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (s);
}

// int main() {
//     char dest[10] = "Cdasd";
// 	char src[10];
// 	ft_strncpy(src,dest,10);
//     for (int i = 0; i < 10; i++) {
//         if (src[i] == '\0') {
//             printf("[\\0] "); 
//         } else {
//             printf("%c ", src[i]);
//         }
//     }
//     return 0;
// }