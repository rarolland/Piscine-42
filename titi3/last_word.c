/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:52:47 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 11:24:51 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == 32 || str[i] == '\t')
		i--;
	while(i > 0)
	{
		if (str[i] == 32 || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return(0);
}
