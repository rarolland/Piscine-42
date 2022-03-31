/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:28:15 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 11:47:33 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
}

void fizzbuzz(int nb)
{
	while (nb > 0 && nb < 101)
	{
		if(nb > 9)
		{
			if(nb % 3 == 0 && nb % 5 == 0)
				write(1, "fizzbuzz\n", 9);	
			else if (nb % 3 == 0)
				write(1, "fizz\n", 5);
			else if (nb % 5 == 0)
				write(1, "buzz\n", 5);
			else
			{ 
				ft_putnbr(nb);
				write(1, "\n", 1);
			}
		}
		if(nb < 10)
        {
            if(nb % 3 == 0 && nb % 5 == 0)
                write(1, "fizzbuzz\n", 9);
            else if (nb % 3 == 0)
                write(1, "fizz\n", 5);
            else if (nb % 5 == 0)
                write(1, "buzz\n", 5);
            else
			{
                ft_putnbr(nb);
                write(1, "\n", 1);
            }
        }
	nb++;
	}
}

int main (void)
{
	int nb = 1;
	fizzbuzz(nb);	
}
