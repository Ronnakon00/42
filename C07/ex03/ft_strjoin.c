/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 15:45:13 by ronny             #+#    #+#             */
/*   Updated: 2026/07/22 16:25:10 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	char	*ptr;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		if (dest != NULL)
			dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (dest == NULL)
		return (NULL);
	ptr = dest;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcpy(ptr, sep);
		i++;
	}
	*ptr = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "42", "Bangkok", "Network"};
// 	char	*sep = ", ";
// 	char	*res;
// 	res = ft_strjoin(4, strs, sep);
// 	printf("Result: \"%s\"\n", res);
// 	free(res);
// 	res = ft_strjoin(1, strs, sep);
// 	printf("Size 0 Result: \"%s\"\n", res);
// 	free(res);
// 	return (0);
// }