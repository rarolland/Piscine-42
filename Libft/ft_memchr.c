/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:14:47 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/05 13:26:54 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryblock, int c, size_t size)
{
	char	*cmemoryblock;	
	char	*temp;

	cmemoryblock = (char *)memoryblock;
	temp = NULL;
	while (size && *cmemoryblock)
	{
		if (*cmemoryblock == c)
			temp = cmemoryblock;
		size--;
		cmemoryblock++;
	}
	return (temp);
}
/*int main() {
    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }
    return (0);
}*/
