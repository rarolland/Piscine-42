/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:11:56 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 15:21:55 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char lastword(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == 32 || str[i] == '\t')
		i--;
	while(i > 0)
	{
		if(str[i] == 32 || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
	return(0);
}

int main (int argc, char **argv)
{
	if(argc == 2)
		lastword(argv[1]);
	write(1, "\n", 1);
	return(0);
}
