/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:50:36 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 14:56:58 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	if (argc > 1)
	{
		argc--;
		while(argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

