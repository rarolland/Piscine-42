/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:38:09 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 10:51:02 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char *ft_rev_print(char *str)
{
	int i;
	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return(str);
}

int main()
{
	char str[] = "dub0 a POIL";
	ft_rev_print(str);
	return(0);
}
