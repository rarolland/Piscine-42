/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:14:04 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/17 19:32:11 by rarollan         ###   ########.fr       */
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

void	ft_print_program(int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		j++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_program(argc, argv);
}