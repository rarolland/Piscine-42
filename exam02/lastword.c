/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:49:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 13:55:53 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void lastword(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (str[i] == 32 || str[i] == '\t')
		i--;
	while (i > 0)
	{
		if (str[i] == 32 || str[i] == '\t')
			break ;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		lastword(argv[1]);
	write(1, "\n", 1);
	return (0);
}
