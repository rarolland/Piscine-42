/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:55:44 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/04 16:08:40 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while (len > 0)
	{
		if (str[len] == c)
			return ((char *) &str[len]);
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
int main() 
{
	const char str[150] = "je suis ton mere suis ton pere";
	int c = 't';
	printf("%s\n", ft_strrchr(str, c));
	return(0);
}*/
