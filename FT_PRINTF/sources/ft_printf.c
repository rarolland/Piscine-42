/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:54:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 16:24:43 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_format(va_list arg, const char format)
{
	int nbr;

	nbr = 0;
	if (format == 'c')
		nbr += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	/*else if (format == 'p')
		nbr += ft_print_ptr(va_arg(arg, unsigned long long int));
	else if (format == 'd' || format == 'i')
		nbr +=	ft_printnbr(va_arg(arg, int));
	else if (format == 'u')
		nbr += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		nbr += ft_print_hexa(va_arg(arg, unsigned int));
	else if (format == '%')
		nbr += ft_printpercent();*/
	return (nbr);
}		

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		nbr;
	
	i = 0;
	nbr = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			nbr += ft_format(arg, str[i + 1]);
			i++;
		}
		else
			nbr += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (nbr);
}

int	main()
{
//	char    *tab = "test";
//	char    *vide = "";
//	char    *null = NULL;
	printf("char %c\nint %d\nstr %s\n", 'A', 456, "test");
//	printf("char %c\nint %d\nstr %s\nuint %u\nhex %x\npointeur %p\n\n",
//	'A', 456, "test", -123456, 154878, tab);
//	ft_printf("char %c\nint %d\nstr %s\nuint %u\nhex %x\npointeur %p\n",
//	'A', 456, "test", -123456, 154878, tab);
	ft_printf("char %c\nint %d\nstr %s\n", 'A', 456, "test");

// 	printf("test 2 : str vide %s\n", vide);
// 	ft_printf("test 2 : str vide %s\n", vide);
// 	ft_printf("%p\n", null);
// 	printf("%p\n", null);

//	printf(" %c ", '0');
//	ft_printf(" %c ", '0');

// 	int     i = 0;
// 	i = ft_printf("%d, %d", -10, 20);
// 	ft_printf("\n%d", i);
// 	return (0);
}
