/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:08:53 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 17:19:34 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (i);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i = 0;
		while (src[i])
			i++;
	}
	return (i);
}
/*int main ()
{
	char	dest[10];
	char	*src = "ok le test";
	printf("%ld\n%s\n", ft_strlcpy(dest, src, 0), dest);
	return (0);
}*/
