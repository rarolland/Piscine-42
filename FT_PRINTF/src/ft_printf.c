/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:54:23 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/17 16:14:01 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list arg, const char format)
{
	int nbr;

	print = 0;
	if (format == 'c')
		nbr += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		nbr += ft_printstr(va_arg(arg, char));
	else if (format == 'p')
		nbr += ft_print_ptr(va_arg(arg, unsigned long long ));
	else if (format == 'd' || format == 'i')
		nbr +=	ft_printnbr(va_arg(arg, int));
	else if (format == 'u')
		nbr += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		nbr += ft_print_hexa(va_arg(arg, unsigned int));
	else if (format == '%')
		nbr += ft_printpercent();
	return (print);
}		

int	ft_printf(const char *, ...)
{
	va_list	arg;
	int		i;
	int		nbr;
	
	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			nbr += ft_format(arg, str[i + 1];
			i++;
		}
		else
			ft_printchar(str[i]
			
	va_start (arg, str)
}

int	main()
{
	char    *tab = "test";
//	char    *vide = "";
//	char    *null = NULL;
	printf("char %c\nint %d\nstr %s\nuint %u\nhex %x\npointeur %p\n\n",
	'A', 456, "test", -123456, 154878, tab);
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
}
