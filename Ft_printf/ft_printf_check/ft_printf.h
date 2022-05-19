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

int	ft_format(va_list arg, const char format);
int	ft_printf(const char *str, ...);
size_t	ft_print_ptr(unsigned long long int n);
size_t  ft_print_hexa(unsigned int n, unsigned char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int	ft_putchar(int c);
int	ft_printnbr(int nb);
int	ft_printpercent(void);
size_t	ft_print_uint(unsigned int n);

#endif
