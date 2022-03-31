/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:27:42 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 14:11:41 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	 k;

	i = 0;
	j = 0;
	k = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
			return (0);
	}
	if(argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					k++;	
					break;
				}
			j++;
			}
		i++;
		}
	}
	i = 0;
	if (ft_strlen(argv[1]) == k)
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
