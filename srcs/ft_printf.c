/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:04:46 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:19:21 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		i;
	t_specifier	*specifier;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			specifier = malloc(sizeof(t_specifier));
			if (specifier)
			{
				i += handle_flag(format + i, specifier);
				i += handle_type(format + i, args, specifier);
				free(specifier);
			}
			continue ;
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
