/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:18:47 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/29 18:28:03 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	size_strs;

	i = 0;
	size_strs = 0;
	while (i < size)
	{
		size_strs += ft_strlen(strs[i]);
		i++;
	}
	size_strs += ft_strlen(sep) * (size - 1);
	return (size_strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		dest_len;

	dest_len = total_size(size, strs, sep);
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		*dest = 0;
		return (dest);
	}
	dest = malloc((dest_len + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
