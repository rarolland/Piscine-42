/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:30:36 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 12:38:13 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != '\0')
	{
		if (nb > 1000000 && i > 1000)
			return (1);
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}

/*int	main()
{
	int nb;
	nb = INT_MAX - 1;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/
