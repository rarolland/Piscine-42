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

int ft_printnbr(int nbr)
{
	int		len;
	//char		*nb;

	len = 0;
	ft_itoa(nbr);
	while (nbr)
	{
		write (1, &nbr, 1);
		nbr++;
	}
	//nb = (char *)nbr;
	//ft_printstr(nb);
	//free(nb);
	return (len);
}	

int ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
