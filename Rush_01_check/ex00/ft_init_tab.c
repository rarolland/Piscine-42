/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablevin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:44:33 by ablevin           #+#    #+#             */
/*   Updated: 2022/03/19 17:46:19 by ablevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**init_tab(void)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		tab[i] = (int *)malloc(4 * sizeof(int ));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		j = 0;
		i ++;
	}
	return (tab);
}
