/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:59:08 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 17:48:16 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	wdlen;
	
	i = 0;
	j = 0;
	wdlen = 0;

	if(argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			while(argv[2][j] != '\0')
			{
				if(argv[1][i] == argv[2][j])
				{
					wdlen++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (wdlen == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}

