/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:03:04 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 11:07:41 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;	
	char	*init;

	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	init = newstr;
	while (len--)
	{	
		*newstr++ = s[start];
		start++;
	}
	*newstr = 0;
	return (init);
}
/*int main()
{
	char const s[] = "bonjour monsieur";
	unsigned int start = 0;
	size_t len = 12;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
