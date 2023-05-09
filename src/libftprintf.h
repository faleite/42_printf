/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:18:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/09 18:21:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

/**
 * @brief The printf utility formats and prints its arguments, after the first, 
 * under control of the	format.	The format is a character string which contains
 * three types of objects: plain characters, which are simply copied to	standard
 * output, character escape sequences which are converted and copied to the 
 * standard output, and	format specifications, each of which causes printing of	
 * the next successive argument.
 * */
int	ft_printf(const char *fmt, ...);

#endif /* LIBFTPRINTF_H */
