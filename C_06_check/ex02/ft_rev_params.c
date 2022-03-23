/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:36:08 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/18 11:35:15 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_rev_params(int argc, char **argv)
{
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		j--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
}
