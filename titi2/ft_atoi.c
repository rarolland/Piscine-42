/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:12:13 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/30 12:50:59 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	result = 0;
	sign = 1;
	i = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while(str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

int	main()
{
	printf("%d", ft_atoi("	  -1234ab567"));
	return(0);
}
