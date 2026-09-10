/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:42:56 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/20 00:26:42 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_base(char *c)
{
    int i;
    int j;
    int len;

    i = 0;
    len = 0;
    while (c[i] != '\0')
    {
        if (c[i] == '+' || c[i] == '-' || c[i] == ' ' 
            || (c[i] >= 9 && c[i] <= 13))
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
    if (len <= 1)
        return (0);
    return (len);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     b;
    long     nb;

    b = check_base(base);
    if (b == 0)
        return ;
    nb = nbr;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= b)
    {
        ft_putnbr_base(nb / b, base);
    }
    write(1, &base[nb % b], 1);
}

// int main()
// {
//     char c[] = "0123456789ABCDEF";
//     ft_putnbr_base(42,c);
// }