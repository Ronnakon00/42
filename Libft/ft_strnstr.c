/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:30:35 by ronny             #+#    #+#             */
/*   Updated: 2026/09/10 14:07:10 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *)hay);
	}
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && (i + j) < len && hay[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
