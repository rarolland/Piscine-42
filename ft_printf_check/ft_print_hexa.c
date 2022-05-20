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

void	ft_putx(unsigned int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putx(n / 16);
		ft_putx(n % 16);
	}
	else
		ft_putchar(hexa[n]);
}

void	ft_putbigx(unsigned int n)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putbigx(n / 16);
		ft_putbigx(n % 16);
	}
	else
		ft_putchar(hexa[n]);
}

size_t	ft_print_x(unsigned int n)
{
	ft_putx(n);
	return (ft_hexa_len(n));
}

size_t	ft_print_bigx(unsigned int n)
{
	ft_putbigx(n);
	return (ft_hexa_len(n));
}
