/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:06:33 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 16:07:01 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

int check1(char *str, char c, char pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void	ft_union(char *str, char *str1)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (check1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (check2(str, str1[i]) == 1)
		{
			if(check1(str1, str1[i], i) == 1)
				write(1, &str1[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc ==3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

