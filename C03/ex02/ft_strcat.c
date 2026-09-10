/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:38:04 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/14 22:09:12 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

// int main (void)
// {
//     char a[100] = "green";
//     char b[] = "greenhouse";
//     int x;
//     ft_strcat(a,b);
// 	int i;
// 	i =0;
// 	while(a[i] != '\0')
// 	{
// 		printf("%c",a[i]);
// 		i++;
// 	}
// }