/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:41:09 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/28 12:40:33 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(((max - min) + 1) * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*int	main()
{
	int *tab;
	int i;

	tab = ft_range(5, 10);
	i = 0;
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
