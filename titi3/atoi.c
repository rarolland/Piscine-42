/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:15:33 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/31 14:34:22 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{	
	int i = 0;
	int result = 0;
	int sign = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == 45 || str[i] == 43)
	{
		if(str[i] == 45)
		{
			sign = -1;
		}
	i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return(result);
}

int main ()
{
	char str[] = "    +1234abhg5678";
	printf("%d", ft_atoi(str));
	return(0);
}

