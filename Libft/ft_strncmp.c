/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:09:00 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/04 16:14:22 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int   main()
{
    char    s1[] = "Salut";
    char    s2[] = "salut";
    unsigned int    n = 3;
    printf("%d", ft_strncmp(s1, s2, n));
    return (0);
}*/
