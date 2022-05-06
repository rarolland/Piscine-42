/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:39:28 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/22 18:03:27 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = nb;
	while (power > 1)
	{
		total *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (total);
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 0;
	printf("%d * %d = %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}*/
