/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:07:36 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/20 11:48:34 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_uint(unsigned int n)
{
	size_t			len;
	unsigned int	nb;

	nb = n;
	len = ft_nbr_len(nb);
	if (n > 9)
	{
		ft_print_nbr(n / 10);
		ft_print_nbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (len);
}
