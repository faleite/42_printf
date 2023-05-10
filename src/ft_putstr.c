/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:59:28 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/10 21:42:09 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

# include <unistd.h>
# include <stdio.h>
int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		write(1, &s[len++], 1);
	return (len);
}

int	main(void)
{
	/* ft_putstr("Hello!"); */
	printf("\n");
	printf("len: %d", ft_putstr("Hello!"));
	return (0);
}
