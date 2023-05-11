/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/11 21:53:51 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		len += write(1, &"0123456789"[n], 1);
	}
	else
	{
		len += ft_putnbr((n / 10));
		len += ft_putnbr((n % 10));
	}
	return (len);
}
