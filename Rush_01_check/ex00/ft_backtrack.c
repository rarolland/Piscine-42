/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablevin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:49:51 by ablevin           #+#    #+#             */
/*   Updated: 2022/03/20 15:30:43 by ablevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	not_on_row(int num, int j, int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i][j] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	not_on_column(int num, int i, int **tab)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tab[i][j] == num)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int	ft_backtrack(int **tab, int pos)
{
	int	num;
	int	i;
	int	j;

	i = pos / 4;
	j = pos % 4;
	if (pos == 16)
		return (1);
	num = 1;
	while (num <= 4)
	{
		if (not_on_row(num, j, tab) && not_on_column(num, i, tab))
		{
			tab[i][j] = num;
			if (ft_backtrack(tab, pos + 1))
				return (1);
		}
		num ++;
	}
	tab[i][j] = 0;
	return (0);
}
