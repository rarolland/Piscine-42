/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:47:43 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/19 11:47:58 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char format)
{
	size_t	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_printstr(va_arg(arg, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(arg, unsigned long long int));
	else if (format == 'd' || format == 'i')
		len += ft_print_nbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_print_uint(va_arg(arg, unsigned int));
	else if (format == 'x')
		len += ft_print_x(va_arg(arg, unsigned int));
	else if (format == 'X')
		len += ft_print_bigx(va_arg(arg, unsigned int));
	else if (format == '%')
		len += ft_printpercent();
	return (len);
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
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			nbr += ft_format(arg, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			nbr++;
		}
		i++;
	}
	va_end(arg);
	return (nbr);
}

/*int	main()
{
	char    *tab = "test";
//	char    *vide = "";
//	char    *null = NULL;

	printf("char %c\nint %d\nstr %s\nuint %u\nhex %x\npointeur %p\n\n", 
	'A', 456, "test", -123456, 154878, tab);

	printf("\n");

	ft_printf("char %c\nint %d\nstr %s\nuint %u\nhex %x\npointeur %p\n", 
	'A', 456, "test", -123456, 154878, tab);

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
}*/
