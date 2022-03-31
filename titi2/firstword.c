/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:16:41 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 15:33:24 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
    {
        while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while(argv[1][i] != '\0' && argv[1][i] != 32 && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
