/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:43:14 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 10:51:03 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_rev_print(char *str)
{
	int i = ft_strlen(str);
	i--;
	while(i >= 0)
	{	
		write(1, &str[i], 1);
		i--;
	}
	return(0);
}

int main()
{
	char str[] = "dub0 a POIL";
	ft_rev_print(str);
	return(0);
}
