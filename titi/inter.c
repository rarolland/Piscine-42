/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:50:52 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 12:27:18 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void inter(char *str, char *str1)
{
	int	j;
	int	i;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str1[j])
		{
			if(str[i] == str1[j])
				if(check_doubles(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
					break ;
				}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}



