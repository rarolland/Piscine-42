/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:54:28 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/28 11:38:43 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*int	main()
{
	char str[] = "je suis ton pere";

	printf("%s", ft_strdup(str));
	return (0);
}*/
