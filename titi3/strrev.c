/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:30:26 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 10:37:25 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	int temp;

	i = 0;
	len = ft_strlen(str) - 1;
	while(len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

int main ()
{
	char str[] = "je suis moi";
	printf("%s", ft_strrev(str));
	return (0);
}	
