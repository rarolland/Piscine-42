/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:17:15 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 16:14:40 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_nlen(int n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	temp;

	i = ft_nlen(n);
	temp = n;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (temp == INT_MIN)
	{
		str = "-2147483648";
		return (str);
	}
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		str[i] = (temp % 10) + 48;
		i--;
		temp /= 10;
	}
	return (str);
}
/*int main (void)
{
	long	nbr;
	nbr = INT_MIN;
	printf("%s\n", ft_itoa(nbr));
	return (0);
}*/
