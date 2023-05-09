```c
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