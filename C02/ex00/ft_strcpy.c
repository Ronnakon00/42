/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 20:33:43 by ronny             #+#    #+#             */
/*   Updated: 2026/07/09 22:08:25 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*s;

	s = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

// int main() {
//     char source[] = "Hello, World!";
//     char destination[50]; 
//     ft_strcpy(destination, source);
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);
//     return 0;
// }