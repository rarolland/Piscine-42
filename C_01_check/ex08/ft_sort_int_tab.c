/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:56:57 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/13 21:08:35 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;

	while(count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count = 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

/*int	main(void)
{
	int tab[5] = {0, 78, 98, 54, 85};
	ft_sort_int_tab(tab, 5);
	printf("%d", tab[5]);
	return(0);
}*/
