/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:18:47 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 12:03:10 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	char	*temp;

	news = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!news)
		return (NULL);
	temp = news;
	while (*s1)
		*news++ = *s1++;
	while (*s2)
		*news++ = *s2++;
	*news = 0;
	return (temp);
}
/*int main ()
{
	char const strs[] = "bonjour monsieur";
	char const sep[] = " le directeur";
	printf("%s\n", ft_strjoin(strs, sep));
	return (0);
}*/
