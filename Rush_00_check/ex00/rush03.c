/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:44:50 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/13 14:18:31 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	Selector(int x, int y, int X, int Y)
{
    char	*lst = "ABCBBABC";
    if (x == 0 && y == 0)
	    ft_putchar(lst[0]);
    else if (x != 0 && y == 0 && x != X -1)
	    ft_putchar(lst[1]);
    else if (x == X -1 && y == 0)
	    ft_putchar(lst[2]);
    else if (x == 0 && y != 0 && y != Y - 1)
	    ft_putchar(lst[3]);
    else if (x == X - 1 && y != 0 && y != Y -1)
	    ft_putchar(lst[4]);
    else if (x == 0 && y == Y -1 )
	    ft_putchar(lst[5]);
    else if (y == Y - 1 && x != 0 && x != X -1)
	    ft_putchar(lst[6]);
    else if (x == X - 1 && y == Y - 1)
	    ft_putchar(lst[7]);
    else
	    ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;
	
	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			Selector(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
