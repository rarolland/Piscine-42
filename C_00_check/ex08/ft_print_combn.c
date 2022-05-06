/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:56:40 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/13 13:45:49 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_translate(int i)
{
	char	c;

	c = 48 + i;
	ft_putchar(c);
}

void	ft_print_combn(int n)
{
	int	tab[n - 1];
	int	i;
	int	s;

	tab[0] = 0;
	i = 0;
	s = n;
	
	while (tab[0] <= 9)
	{
		n = s;
		tab[1] = tab[0] + 1;
		while (n > 0)
		{
			tab[i + 1] = tab[i] + 1; 
			ft_translate(tab[i]);
			n--;
			i++;
		}
		write(1, ", ", 2);
		tab[0]++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return(0);
}

