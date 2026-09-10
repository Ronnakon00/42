/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:24:33 by ronny             #+#    #+#             */
/*   Updated: 2026/09/10 14:34:58 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!s)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		len = 0;
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
