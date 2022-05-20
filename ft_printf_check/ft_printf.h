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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list arg, const char format);
void	ft_putptr(unsigned long long int n);
void	ft_putnbr(int n);
void	ft_putx(unsigned int n);
void	ft_putbigx(unsigned int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_hexa_len(unsigned long long int n);
size_t	ft_print_ptr(unsigned long long int n);
size_t	ft_print_x(unsigned int n);
size_t	ft_print_bigx(unsigned int n);
size_t	ft_printstr(char *s);
size_t	ft_print_nbr(int n);
size_t	ft_nbr_len(long n);
size_t	ft_printpercent(void);
size_t	ft_print_uint(unsigned int n);

#endif
