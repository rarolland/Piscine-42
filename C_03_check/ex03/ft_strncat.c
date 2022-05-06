/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:59:46 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/18 11:07:40 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;

	n = ft_strlen(dest);
	if (nb == 0)
		return (dest);
	while (*src != '\0' && nb > 0)
	{
		dest[n] = *src;
		n++;
		nb--;
		src++;
	}
	dest[n] = '\0';
	return (dest);
}
/*int	main()
{
	char	dest[30] = "Salut, ";
	char	src[] = "Comment tu vas ?";
	unsigned int	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
