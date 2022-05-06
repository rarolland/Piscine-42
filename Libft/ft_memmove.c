/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:44:54 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/05 12:47:43 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	long unsigned int	i;
	char				*cdest;
	char				*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	while (i <= size)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
/*int main ()
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
