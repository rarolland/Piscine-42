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

#include "libft.h"
#include "ft_printf.h"

void	ft_print_x(unsigned long long int n)
{
	char	*base 
	
	base = "0123456789abcdef";
	
	while (n >= 16)
	{
		ft_print_x(n / 16);
		n = n % 16;
	}
	ft_putchar_fd(base[n], 1);
}
