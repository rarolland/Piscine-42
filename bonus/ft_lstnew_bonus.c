/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:51:26 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/11 10:56:00 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	
		*ft_lstnew(void *content)
{
	t_list *element;
	
	if(!(element = malloc(sizeof(t_list)));
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);	
}
