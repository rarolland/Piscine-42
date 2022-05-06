/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:07:27 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/15 21:15:41 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	ft_putchar(base_hexa[c / 16]);
	ft_putchar(base_hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			ft_hexa((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*int	main()
{
	char	*str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
