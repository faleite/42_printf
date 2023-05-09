/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:57:41 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/09 22:19:34 by faaraujo         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */

#include "libftprintf.h" 

# include <stdio.h>
# include <stdarg.h>

int	type()
{
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	argptr;
	size_t	i;

	i = 0;
	va_start(argptr, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			i++;
	}

	return (0);
}

int	main(void)
{
	printf("String");
	return(0);
}
