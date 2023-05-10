/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:57:41 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/10 20:01:51 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

# include <stdio.h>
# include <stdarg.h>

static int	fmt_type(char type, va_list argptr)
{
	int	c;

	c = 0;
	if (type == '%')
		c += ft_putchar('%');
	else if (type == 'c')
		c += ft_putchar(va_arg(argptr, int));
	else if (type == 's')
		c += ft_putstr(va_arg(argptr, char *));
	else if (type == 'd' || type == 'i')
		c += ft_putnbr(va_arg(argptr, int));
	else if (type == 'u')
		c += ft_uint(va_arg(argptr, unsigned int));
	else if (type == 'p')
		c += ft_adrees(va_arg(argptr, unsigned long int));
	else if (type == 'x')
		c += ft_hexa(va_arg(argptr, unsigned int));
	else if (type == 'X')
		c += ft_hexa(va_arg(argptr, unsigned int));
	return (c);
}

int	ft_printf(const char *param, ...)
{
	va_list	argptr;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	va_start(argptr, param);
	while (param[i])
	{
		if (param[i] == '%')
		{
			c += fmt_type(param[++i], argptr);		
		}
		else
			c += ft_putchar(param[i]);
		i++;
	}
	va_end(argptr);
	return (c);
}

int	main(void)
{
	printf("String");
	return(0);
}
