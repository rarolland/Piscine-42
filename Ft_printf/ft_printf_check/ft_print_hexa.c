/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:32:39 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/19 11:55:46 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t    ft_print_hexa(unsigned int n, unsigned char c)
{
    char    *hexa1;
    char    *hexa2;

    hexa1 = "0123456789abcdef";
    hexa2 = "0123456789ABCDEF";
    if (c == 'x')
    {
        if (n >= 16)
        {
            ft_print_hexa(n / 16, c);
            ft_print_hexa(n % 16, c);
        }
        else
            ft_putchar(hexa1[n]);
    }
    if (c == 'X')
    {
        if (n >= 16)
        {
            ft_print_hexa(n / 16, c);
            ft_print_hexa(n % 16, c);
        }
        else
            ft_putchar(hexa2[n]);
    }
    return (1);
}
