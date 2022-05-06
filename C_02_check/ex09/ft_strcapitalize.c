/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:55:45 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/15 21:14:42 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
		{
			str[0] = str[0] - 32;
		}
		if ((str[i] > 31 && str[i] < 48)
			|| (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97)
			|| (str[i] > 122 && str[i] < 127))
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*int	main()
{
	char	str[] = "Salut PIERRICK comment tu vas?cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return(0);
}*/
