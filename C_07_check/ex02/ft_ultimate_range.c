/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:42:32 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/28 14:25:13 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*nbrs;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (0);
		*range = NULL;
	}
	nbrs = malloc(sizeof(int) * (max - min));
	if (nbrs == NULL)
		return (-1);
	while (min < max)
	{
		nbrs[i] = min;
		min++;
		i++;
	}
	*range = nbrs;
	return (i);
}
/*int    main(void)
{
    int    min;
    int    max;
    int    *range[50] = {0};

    min = 10;
    max = 20;
    printf("%d", ft_ultimate_range(range, min, max));
    return (0);
}*/
