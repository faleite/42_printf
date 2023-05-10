```c
#include "ft_printf.h"

static size_t	ft_formato(char c, va_list list)
{
	size_t	special;

	special = 0;
	if (c == 'c')
		special = ft_character(va_arg(list, int));
	else if (c == 's')
		special = ft_string(va_arg(list, char *));
	else if (c == 'p')
		special = ft_adress(va_arg(list, unsigned long));
	else if (c == 'd' || c == 'i')
		special = ft_number(va_arg(list, int));
	else if (c == 'u')
		special = ft_unsigned_number(va_arg(list, unsigned int));
	else if (c == 'x')
		special = ft_hexa(va_arg(list, unsigned int), HEXALOW);
	else if (c == 'X')
		special = ft_hexa(va_arg(list, unsigned int), HEXAHIGH);
	if (c == '%')
		special = ft_character('%');
	return (special);
}

static int	ft_formatype(char type, va_list args)
{
	int	c;

	c = 0;
	if (type == '%')
		c += ft_putchar('%');
	else if (type == 'd' || type == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (type == 'c')
		c += ft_putchar(va_arg(args, int));
	else if (type == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (type == 'x' || type == 'X')
		c += ft_hexadec(va_arg(args, unsigned int), type);
	else if (type == 'u')
		c += ft_uint(va_arg(args, unsigned int));
	else if (type == 'p')
		c += ft_check(va_arg(args, unsigned long int), 'p');
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			c;
	int			i;

	i = -1;
	c = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			c += ft_formatype(format[++i], args);
			continue ;
		}
		c += ft_putchar(format[i]);
	}
	return (c);
}

int	ft_printf(const char *param, ...)
{
	va_list	list;
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	va_start(list, param);
	while (param[i])
	{
		if (param[i] == '%')
			r += ft_formato(param[++i], list);
		else
			r += ft_character(param[i]);
		i++;
	}
	va_end(list);
	return (r);
}