/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:23:40 by ronny             #+#    #+#             */
/*   Updated: 2026/09/10 14:02:33 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}

// 1 2 3 4 5 
// ^ ^ memcpy
// 1 1 1 1 5
// -------------
// 1 2 3 4 5
// ^ ^ memmove
// src 1 2 3 4 5
//     ^
// des 1 2 3 4 5
//       ^
