/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:52:24 by ronny             #+#    #+#             */
/*   Updated: 2026/07/13 10:34:48 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 'a' && *str <= 'z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

// int main(){
// 	int aws;
// 	aws = ft_str_is_alpha("1234");
// 	printf("%d",aws);
// }