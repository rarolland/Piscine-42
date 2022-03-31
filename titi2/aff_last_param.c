/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:52:50 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 11:03:29 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int index;
	index = 0;
	if (argc > 1)
	{
		argc--;
		while (argv[argc][index] != '\0')
		{
			write(1, &argv[argc][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return(0);
}	
