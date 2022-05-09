/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:29:07 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 12:49:54 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

/*int main()
{
	printf("%p\n", ft_calloc(10, 4));
	return(0);
}*/
