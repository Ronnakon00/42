/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:27:00 by ronny             #+#    #+#             */
/*   Updated: 2026/09/10 14:38:49 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dub;
	size_t	len;

	len = ft_strlen(s);
	dub = (char *)malloc(sizeof(char) * (len + 1));
	if (!dub)
	{
		return (NULL);
	}
	ft_memcpy(dub, s, len + 1);
	return (dub);
}
