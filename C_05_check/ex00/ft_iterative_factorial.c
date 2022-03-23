/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:51:13 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/22 16:57:12 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	while (nb > 0)
	{
		total = total * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (total);
}
/*int	main()
{
	int	nb;

	nb = 1;
	printf("!%d = %d\n", nb, ft_iterative_factorial(nb));
	return(0);
}*/
