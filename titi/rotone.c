/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:26:49 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 10:42:27 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone (char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 65 && str[i] <= 89) || (str[i] >= 97 && str[i] <= 121))
			str[i] += 1;
		if(str[i] == 122 || str[i] == 90)
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
}
