/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:17:15 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 15:51:59 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
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

int	minint(long temp)
{
	if (temp == INT_MIN)
	{
		return (1);
	}
	return (0);
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
	if (minint(temp))
		return ("-2147483648");
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		str[i--] = (temp % 10) + 48;
		temp /= 10;
	}
	return (str);
}
/*int main()
{
    int a = -2147483648;
    printf("%s\n", ft_itoa(a));
    return (0);
}*/
