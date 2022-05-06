/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:08:53 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/05 18:13:21 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;
	int	nsize;

	nsize = (int)size;
	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size)
	{
		while (src[j] && j < (nsize - 1))
		{
			dest[j] = src[j];
			j++;
		}
	}
	dest[j] = '\0';
	return (i);
}
/*int main ()
{
	char	dest[100];
	char	*src = "ok le test";
	printf("%ld\n%s\n", ft_strlcpy(dest, src, 0), dest);
	return (0);
}*/
