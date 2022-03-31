/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:56:57 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 12:12:29 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkdoubles(char *str, char c, int pos)
{
	int i = 0;
	while (pos > i)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void inter(char *str, char *str1)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		while(str1[j])
		{
			if(str[i] == str1[j])
			{
				if(checkdoubles(str, str1[j], i) == 1)
				{	
					write(1, &str[i], 1);
					break;
				}
			}
		j++;
		}
	i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
