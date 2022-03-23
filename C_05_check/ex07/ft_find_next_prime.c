/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:30:36 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/23 17:33:14 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	verif(int nb)
{
	int	i;

	i = 2;
	while (nb / (i - 1) > i)
	{
		i += 1;
	}
	if (nb % i == 0)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	if (verif(nb))
		return (nb);
	else
		while (verif(nb + i) == 0)
			i++;
	return (nb);
}
/*int	main()
{
	int nb;
	nb = 22091;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/
