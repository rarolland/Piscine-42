/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:38:51 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/23 11:56:02 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write (1, str, 1);
	str++;
	}
}

void	ft_swap(char **pa, char **pb)
{
	char	*temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int	ft_strcmp(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i] || str1[i])
	{
		if (str[i] != str1[i])
			return (str[i] - str1[i]);
	i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 1 + i;
		while (j <= argc - 1)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
	i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putchar(argv[j]);
		ft_putchar("\n");
	j++;
	}
	return (0);
}
