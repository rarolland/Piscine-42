/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_str2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:58:55 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/27 17:11:01 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>
#include <stdlib.h>

int	ft_pow(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	while (power > 0)
	{
		i = nb * i;
		power--;
	}
	return (i);
}

int	count_size_dest(int atoi, int i)
{
	int	j;
	int	div;

	j = 0;
	while (i > 1)
	{
		div = atoi / ft_pow(10, (i - 1));
		if (atoi > 100)
		{
			j++;
		}
		else if (atoi < 100 && atoi > 0)
		{
			div = atoi / 10;
			if (atoi % 10 != 0)
			{
				j++;
			}
		}
		atoi = atoi - (div * ft_pow(10, (i - 1)));
		i--;
		j++;
	}
	return (j);
}

int	*div_str(char *str)
{
	int	i;
	int	div;
	int	atoi;
	int	j;
	int	size;
	int	*dest;

	div = 0;
	j = 0;
	i = 0;
	atoi = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - '0';
		i++;
	}
	size = count_size_dest(atoi, i);
	dest = malloc(sizeof(int) * size);
	if (!dest)
		return (NULL);
	while (j < size)
	{
		div = atoi / ft_pow(10, i - 1);
		if (atoi > 100)
		{
			dest[j] = div;
			j++;
			dest[j] = 1 * ft_pow (10, i - 1);
		}
		else if (atoi < 100 && atoi > 0)
		{
			div = atoi / 10;
			dest[j] = div * 10;
			if (atoi % 10 != 0)
			{
				j++;
				dest[j] = atoi % (div * 10);
			}
		}
		atoi = atoi - (div * ft_pow(10, i - 1));
		i--;
		j++;
	}
	j--;
	return (dest);
}
