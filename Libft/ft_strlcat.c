/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 23:40:04 by ronny             #+#    #+#             */
/*   Updated: 2026/09/10 14:05:57 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
	{
		dst_len++;
	}
	if (dst_len == dstsize)
	{
		return (dstsize + src_len);
	}
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
