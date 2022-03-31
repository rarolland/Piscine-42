/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:48:21 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/28 19:45:03 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		else if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
		else
			ft_putchar(nbr + 48);
	}
}

void	ft_fizzbuzz(int nbr)
{
	while (nbr > 0 && nbr < 101)
	{
		if (nbr < 10)
		{	
			if (nbr % 3 == 0 && nbr % 5 == 0)
            	write (1, "fizzbuzz\n", 9);
        	else if (nbr % 3 == 0)
            	write (1, "fizz\n", 5);
			else if (nbr % 5 == 0)
            	write (1, "buzz\n", 5);
			else
			{ 
				ft_putchar(nbr + 48);
				ft_putchar('\n');
			}
		}
		if (nbr > 9)
		{	
			if (nbr % 3 == 0 && nbr % 5 == 0)
        		write (1, "fizzbuzz\n", 9);
			else if (nbr % 3 == 0)
				write (1, "fizz\n", 5);
			else if (nbr % 5 == 0)
				write (1, "buzz\n", 5);
			else
			{	
				ft_putnbr(nbr);
				ft_putchar('\n');
			}
		}
		nbr++;
	}
}

int main(void)
{
	int nbr = 1;
	ft_fizzbuzz(nbr);
	return (0);
}
	
