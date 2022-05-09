/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:04:19 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 17:28:26 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_checkset(char const c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

static int	ft_strlend(const char *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i > 0 && (ft_checkset(str[i], set)))
		i--;
	return (i);
}

static int	ft_strstart(const char *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] && (ft_checkset(str[i], set)))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pr;
	char	*temp;
	int		slen;
	int		elen;

	slen = ft_strstart(s1, set);
	elen = ft_strlend(s1, set);
	pr = malloc((elen - slen + 1) * sizeof(char));
	if (!pr)
		return (0);
	temp = pr;
	while (slen <= elen)
	{
		*pr++ = s1[slen];
		slen++;
	}
	*pr = 0;
	return (temp);
}
/*int main(void)
{
    printf("%s", ft_strtrim("............ok . ?........", ". "));
    return (0);
}*/	
