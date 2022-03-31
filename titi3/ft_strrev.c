/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:39:21 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 14:43:52 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	int temp;
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

int main()
{
	char str[] = "je suis ton pere";
	printf("%s", ft_strrev(str));
}
