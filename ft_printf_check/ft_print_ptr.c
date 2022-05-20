/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:26:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/20 11:47:52 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexa_len(unsigned long long int n)
{
	size_t	len;

	len = (n == 0);
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_putptr(unsigned long long int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	while (n >= 16)
	{
		ft_putptr(n / 16);
		n = n % 16;
	}
	ft_putchar(hexa[n]);
}

size_t	ft_print_ptr(unsigned long long int n)
{
	if (n == '\0')
	{
		ft_putstr("(nil)");
		return (5);
	}
	write(1, "0x", 2);
	ft_putptr(n);
	return (ft_hexa_len(n) + 2);
}
