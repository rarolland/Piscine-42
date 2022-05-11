/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:07:09 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/11 09:50:04 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

struct s_list
{
	int 			content;
	struct s_list 	*next;
};

void	aff_list(struct s_list *begin)
{
	while(begin)
	{
		printf("%d\n", begin->content);
		begin = begin->next;
	}
}

int main(void)
{
	struct s_list	elem1;
	struct s_list	elem2;
	struct s_list	elem3;
	struct s_list	elem4;
	struct s_list	elem5;
	struct s_list	*begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = &elem5;
	elem5.next = 0;
	
	elem1.content = 2;
	elem2.content = 1;
	elem3.content = 0;
	elem4.content = 2001;
	elem5.content = 6;

	aff_list(begin);	
	/*printf("%d\n", begin->content);
	printf("%d\n", begin->next->content);
	printf("%d\n", begin->next->next->content);*/

	return (0);
}
