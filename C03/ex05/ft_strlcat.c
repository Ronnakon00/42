/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:38:04 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/14 13:47:08 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[(i + dest_len)] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

// int main ()
// {
// 	char dst[] = "Hi ";
// 	char srt[] = "My Friend";
// 	unsigned x = ft_strlcat(dst,srt,8);
// 	printf("%d\n",x);
// 	int i=0;
// 	while(dst[i] != '\0')
// 	{
// 		printf("%c",dst[i]);
// 		i++;
// 	}
// }