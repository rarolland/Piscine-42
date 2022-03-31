/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:14:03 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 12:26:56 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkdoubles2(char *str, char c)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int checkdoubles1(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if(str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

void	ft_union(char *str, char *str1)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(checkdoubles1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
		if(checkdoubles2(str, str1[i]) == 1)
		{
			if(checkdoubles1(str1, str1[i], i) == 1)
				write(1, &str1[i], 1);	
		}
	i++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
