/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:04:21 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 11:29:37 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i] != '\0')
	{	
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}


int main ()
{
	char s1[] = "je suis tom";
	char s2[] = " tu es tom  ";
	printf("%s", ft_strcpy(s1, s2));
	return (0);
}
