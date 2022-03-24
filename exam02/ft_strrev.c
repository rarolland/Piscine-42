/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:04 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/24 10:10:10 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ftstrlen(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
		i++;
	return(i);
}

char *ftstrev(char *str)
{
	int i;
	int len;
	int tmp;
	i = 0;
	len = (ftstrlen(str) - 1);
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);

