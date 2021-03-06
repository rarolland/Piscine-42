/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:17:16 by rarollan          #+#    #+#             */
/*   Updated: 2022/03/27 15:44:57 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*translate_char(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == 32 || str[i] == 58
			|| (str[i] >= 48 && str[i] <= 57)))
		i++;
	while (str[i] >= 'a' && str[i] <= 'z')
		return (&str[i]);
	return (0);
}
