/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:44 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 16:34:14 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb >= 10)
		{
			ft_printnbr(nb / 10);
			ft_printnbr(nb % 10);
		}
		else
			ft_putchar(nb + 48);
	}
	return (nb);
}	

int ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
