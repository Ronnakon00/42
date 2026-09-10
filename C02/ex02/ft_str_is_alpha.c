/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:52:24 by ronny             #+#    #+#             */
/*   Updated: 2026/07/12 23:05:56 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

// int main(){
// 	int aws;
// 	aws = ft_str_is_alpha("");
// 	printf("%d",aws);
// }