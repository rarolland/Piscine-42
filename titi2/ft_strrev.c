/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:57:32 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 12:11:34 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	int temp;
	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int main ()
{
	char str[] = "je suis ton pere";
	printf("%s", ft_strrev(str));
	return(0);
}		
