/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atio_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:42:56 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/20 00:03:25 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '+' || c[i] == '-' || c[i] == ' ')
			return (0);
		j = i + 1;
		while (c[j] != '\0')
		{
			if (c[i] == c[j])
				return (0);
			j++;
		}
		len++;
		i++;
	}
	if (len == 1)
		return (0);
	return (len);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	base_len = check_base(base);
	i = 0;
	sign = 1;
	result = 0;
	while (!((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && get_base_index(str[i], base) != -1)
	{
		result = (result * base_len) + get_base_index(str[i], base);
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	int x;
// 	char a[] = "  -1A";
// 	char b[] = "0123456789ABCDEF";
// 	x = ft_atoi_base(a,b);
// 	printf("%d",x);
// }