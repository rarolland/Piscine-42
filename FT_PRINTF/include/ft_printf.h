/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:12:57 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 14:13:45 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>

int	ft_format(va_list arg, const char format);
int	ft_printf(const char *, ...);
int	ft_print_ptr(unsigned long long ptr);

void	ft_putstr(char *str);
void	ft_printstr(char *str);
int	ft_putchar(int c);
int	ft_printnbr(int nbr);
int	ft_printpercent(void);

#endif
