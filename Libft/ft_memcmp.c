/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:56:00 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/05 12:09:32 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned int	i;
	char			*pptr1;
	char			*pptr2;

	i = 0;
	pptr1 = (char *)ptr1;
	pptr2 = (char *)ptr2;
	while ((pptr1[i] || pptr2[i]) && i < size)
	{
		if (pptr1[i] != pptr2[i])
			return (pptr1[i] - pptr2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%d\n", ft_memcmp("Salut", "salut", 1));
	return(0);
}*/
