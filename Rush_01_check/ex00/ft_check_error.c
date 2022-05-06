/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:51:29 by adohou            #+#    #+#             */
/*   Updated: 2022/03/20 18:52:42 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_putnbrs(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i] >= '1' && str[i] <= '4'))
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	if (j != 16)
	{
		ft_putstr("Error\n");
		return ;
	}
}

char	*ft_check_error(int nb_args, char *args)
{
	int	i;
	char	*str;

	str = args;
	i = 0;
	if (nb_args != 2)
		ft_putstr("Error\n");
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] < '1' && str[i] > '4') && !(str[i] == ' '))
			{
				ft_putstr("Error\n");
				return ;
			}
			i++;
		}
		if (!(ft_putnbrs(str)))
		{
			putstr("Error\n");
			return ;
		}
		return (str);
	}
}
