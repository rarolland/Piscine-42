/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:21:16 by cchapon           #+#    #+#             */
/*   Updated: 2022/03/27 11:28:14 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	check_arg(char *arg)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (1);
		i++;
	}
	if (i > 10)
		return (1);
	i = 0;
	r = 0;
	while (arg[i])
	{
		r = r * 10 + arg[i] - '0';
		i++;
	}
	if (r > 4294967294)
		return (1);
	return (0);
}

char	*skip_zero(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] == '0')
		i++;
	return (&arg[i]);
}
/*
int	main(void)
{
	char	*arg = "00046325";

	printf("check_arg : %d\n", check_arg(arg));
	printf("skip_zero : %s\n", skip_zero(arg));
	return (0);
}*/
