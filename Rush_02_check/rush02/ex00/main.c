/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:56:53 by cchapon           #+#    #+#             */
/*   Updated: 2022/03/27 15:46:42 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	check_arg(char *arg);
char			*skip_zero(char *arg);
void			ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (check_arg(argv[1]) == 1 || argc <= 1)
	{
		write (1, "error\n", 6);
		return (1);
	}
	else
	{
		argv[1] = skip_zero(argv[1]);
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}	
	}
	return (0);
}
