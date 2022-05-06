/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:29:07 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/05 15:14:15 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	char	*dest;

	dest = NULL;
	if (elementcount == 0 || elementsize == 0)
		return (NULL);
	dest = malloc(elementcount * elementsize);
	if (!dest)
		return (NULL);
	while (elementsize > 0)
	{
		*dest = 0;
		dest++;
		elementsize--;
	}
	return (dest);
}
/*int main()
{
	printf("%p\n", ft_calloc(10, 4));
	return(0);
}*/
