/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:58:56 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/03 19:18:00 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, size_t size)
{
	long unsigned int	i;
	char				*csrc;
	char				*cdest;

	i = 0;
	csrc = src;
	cdest = dest;
	while (i < size)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (0);
}
/*int main()
{
	char csrc[] = "ceci est un test";
	char cdest[100];
	ft_memcpy(cdest, csrc, strlen(csrc) + 1);
	printf("copied string is %s", cdest);
	
	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	ft_memcpy(idest, isrc, sizeof(isrc));
    printf("\nCopied array is ");
    for (i=0; i<n; i++)
    printf("%d ", idest[i]);
    return 0;
}*/