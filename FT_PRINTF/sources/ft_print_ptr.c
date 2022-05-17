/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:26:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 14:45:55 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putptr(unsigned long long int n)
{
	char	*hexa;
	
	hexa[] = "0123456789abcdef";
	
	while (n >= 16)
	{
		ft_putptr(n / 16);
		n = n % 16;
	}
	ft_putchar_fd(hexa[n]);
}
