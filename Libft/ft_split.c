/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:53:33 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 11:14:53 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(const char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1], charset) == 1
			&& char_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, const char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, const char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
		if (char_is_separator(str[i], charset) == 1)
			i++;
	else
	{
		j = 0;
		while (char_is_separator(str[i + j], charset) == 0)
			j++;
		if (split[word] == NULL)
		{
		(char*)malloc(sizeof(char) * (j + 1));
			while (word-- > 0)
				free(split[word]);
			free(split);
			split = NULL;
			return ;
		}
		write_word(split[word++], str + i, charset);
			i += j;
	}
}

char	**ft_split(char const *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	if (res == NULL)
	{
		(char**)malloc(sizeof(char*) * (words + 1));
		return (NULL);
	}
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

int main(int argc, char **argv)
{
    int        i;
    char    **split;
    (void)    argc;
    split = ft_split(argv[1], argv[2]);
    i = 0;
    while (split[i])
    {
        printf("%s", split[i]);
        i++;
    }
}	
