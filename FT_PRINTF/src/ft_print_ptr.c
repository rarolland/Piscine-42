/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:26:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 14:45:55 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ptrlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
 		i++;
		ptr = ptr /16
	}
	return (i);
}

void	ft_putptr(char *ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10  + 'a'), 1);
}

int	ft_print_ptr(unsigned long long ptr)
{
}
