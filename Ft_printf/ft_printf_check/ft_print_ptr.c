/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:26:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/19 11:54:58 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t    ft_print_ptr(unsigned long long int n)
{
    size_t    len;
    unsigned long long int nb;
    char    *hexa;

    nb = n;
    len = 0;
    hexa = "0123456789abcdef";
    while (nb >= 16)
    {
        nb = nb / 16;
        len++;
    }
    while (n >= 16)
    {
        ft_print_ptr(n / 16);
        n = n % 16;
    }
    ft_putchar(hexa[n]);
    return (len + 2);
}
