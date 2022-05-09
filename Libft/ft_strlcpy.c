/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:22:26 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 17:23:20 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

size_t        ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t size_src;
    size_src = ft_strlen(src);
    if (size_src < dstsize)
    {
        ft_strncpy(dest, src, size_src);
    }
    else if (dstsize != 0)
    {
        ft_strncpy(dest, src, dstsize - 1);
        dest[dstsize - 1] = '\0';
    }
    return (size_src);
}
