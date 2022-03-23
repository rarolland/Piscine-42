/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:21:35 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/22 14:24:48 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program(int argc, char **argv)
{
	int	j;
	int	tmp;

	j = 1;
	while (j < argc)
	{
		ft_strcmp(argv[j]);
		ft_swap(argv[j], tmp);
		ft_putchar(argv[j]);
		j++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_program(argc, argv);
}
