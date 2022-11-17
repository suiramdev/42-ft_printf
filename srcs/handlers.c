/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:02:29 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 13:01:03 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include "handlers.h"
#include "string.h"
#include "displaystr.h"
#include "displaynbr.h"

size_t	handle_all(const char *format, va_list *args,
	t_specifier *specifier, size_t *count)
{
	size_t	i;

	i = 0;
	i += handle_flag(format, specifier, count);
	i += handle_type(format, args, specifier, count);
	return (i);
}

size_t	handle_flag(const char *format, t_specifier *specifier, size_t *count)
{
	return (0);
}

size_t	handle_type(const char *format, va_list *args,
	t_specifier *specifier, size_t *count)
{
	if (*format == 'c')
		*count += display_char(va_arg(*args, int));
	else if (*format == 's')
		*count += display_str(va_arg(*args, char *));
	else if (*format == 'p')
		*count += display_ptr(va_arg(*args, void *));
	else if (*format == 'd')
		*count += display_nbr(va_arg(*args, int));
	else if (*format == 'i')
		*count += display_nbr(va_arg(*args, int));
	else if (*format == 'u')
		*count += display_unbr(va_arg(*args, unsigned int));
	else if (*format == 'x')
		*count += display_as(va_arg(*args, int), "0123456789abcdef");
	else if (*format == 'X')
		*count += display_as(va_arg(*args, int), "0123456789ABCDEF");
	else if (*format == '%')
		*count += display_char('%');
	else
		return (0);
	return (1);
}
