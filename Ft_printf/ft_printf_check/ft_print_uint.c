/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:07:36 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/19 13:08:40 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nbrlen(long nb)
{
	long	size;
	
	size = 0;
	if (nb == 0)
		size++;
	if (nb < 0)
	{
		nb *= -1;
		size++;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

size_t	ft_print_uint(unsigned int n)
{
	size_t			len;
	unsigned int	nb;

	nb = n;
	len = ft_nbrlen(nb);
	if (n > 9)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (len);
}
