/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:11:45 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 18:04:16 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *tab;
	int i;
	i = 0;
	if(start >= end)
		return(0);
	tab = malloc(((end - start) + 2) * sizeof(int));
	if(!tab)
		return(0);
	while(start <= end)
	{
		tab[i++] = start;
		start++;	
	}
	
	return(tab);
}

int main ()
{
	int start = 5;
	int end = 10;
	int *str;
	int i = 0;
	str = ft_range(start, end);
	while (str[i] != '\0')
	{
		printf("%d", str[i]);
		i++;
	}
	return(0);
}
