/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:31:06 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 09:47:36 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char *ft_rev_print(char *str)
{
	int i;
	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return(str);
}

int main()
{
	char str[] = "dub0 a POIL";
	ft_rev_print(str);
	return(0);
}
