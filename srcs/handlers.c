/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:02:29 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:05:44 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include "handlers.h"
#include "string.h"
#include "display.h"

int handle_flag(const char *format, t_specifier *specifier)
{
	return (0);
}

int	handle_type(const char *format, va_list args, t_specifier *specifier)
{
	if (*format == 'c')
		display_char(va_arg(args, int));
	else if (*format == 's')
		display_str(va_arg(args, char *));
	else if (*format == 'p')
		display_ptr(va_arg(args, void *));
	else if (*format == 'd')
		display_nbr(va_arg(args, int));
	else if (*format == 'i')
		display_nbr(va_arg(args, int));
	else if (*format == 'u')
		display_unbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		display_as(va_arg(args, int), "0123456789abcdef");
	else if (*format == 'X')
		display_as(va_arg(args, int), "0123456789ABCDEF");
	else if (*format == '%')
		display_char('%');
	else
		return (0);
	return (1);
}
