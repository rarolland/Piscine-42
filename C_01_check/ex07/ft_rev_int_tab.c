/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:42:24 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/13 12:46:18 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reversei;
	int	swap;

	i = 0;
	reversei = size - 1;
	while (i <= reversei)
	{
		swap = tab[i];
		tab[i] = tab[reversei];
		tab[reversei] = swap;
		i++;
		reversei--;
	}
}
