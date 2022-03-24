/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:50:03 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 18:04:54 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isspace(char *str, int *ptr_i)
{
	int i;
	int count;
	i = 0;
	count = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] && (str[i] == 45 || str[i] == 43))
	{
		if(str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return(count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	result;
	
	result = 0;
	sign = ft_isspace(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return(result);
}

int	main()
{
	printf("%d", ft_atoi("	    ---+--+456gi1234ab567"));
	return(0);
}



			
