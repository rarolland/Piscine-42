/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:03:43 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/22 12:59:17 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	basecheck(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x < 2)
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == 43 || str[i] == 45 || str[i] == 127 || str[i] <= 32)
			return (0);
		while (j < x)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			check;
	int			baselen;

	nb = nbr;
	check = basecheck(base);
	baselen = ft_strlen(base);
	if (check == 1)
	{
		if (nb < 0)
		{
			ft_putchar(45);
			nb = nb * (-1);
		}
		if (nb < baselen)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= baselen)
		{
			ft_putnbr_base(nb / baselen, base);
			ft_putnbr_base(nb % baselen, base);
		}
	}
}
/*int    main(void)
{
    char    base[] = "0123456789abcdef";
    int    nbr = 54;

    ft_putnbr_base(nbr, base);
    return (0);
}*/
