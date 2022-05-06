/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:16:34 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/29 15:28:13 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	in_separator(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_tab(char **str, char **charset, char ***tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[0][i])
	{
		while (in_separator(str[0][i], *charset) == 1 && str[0][i])
			i++;
		while (in_separator(str[0][i], *charset) == 0 && str[0][i])
		{
			tab[0][j][k] = str[0][i];
			k++;
			i++;
		}
		if (tab[0][j][k] == '\0')
			k = 0;
		if (tab[0][j][k] != '\0')
			j++;
	}
	tab[0][j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char			**tab;
	int				size;
	int				i;

	size = ft_strlen(str);
	tab = malloc((size + 1) * sizeof(char *));
	i = 0;
	while (i <= size)
	{
		tab[i] = malloc((size + 1) * sizeof(char));
		i++;
	}
	i = 0;
	ft_tab(&str, &charset, &tab);
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	char	**s;
	char	*str = "bonjour, tu vas bien ?";
	char	*sep = "' ' , t";
	int	i;
    
    s = ft_split(str, sep);
    i = 0;

    while(s[i] != 0)
    {
        printf("%s\n", s[i]);
        i++;
    }
    return (0);
}*/
