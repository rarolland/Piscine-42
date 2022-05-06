/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:04:17 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/22 18:11:38 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = -5;
	printf("%d * %d = %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/
