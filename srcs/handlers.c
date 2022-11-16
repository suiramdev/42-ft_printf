/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:02:29 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 18:30:00 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "handlers.h"
#include "string.h"
#include "display.h"

int handle_flag(const char *format, t_specifier *specifier)
{
	return (0);
}

int	handle_type(const char *format, t_specifier *specifier)
{
	if (*format == 'c')
		display_char(*(char *)specifier->arg);
	else if (*format == 's')
		display_str((char *)specifier->arg);
	else if (*format == 'p')
		display_ptr(specifier->arg);
	else if (*format == 'd')
		display_nbr(*(int *)specifier->arg);
	else if (*format == 'i')
		display_nbr(*(int *)specifier->arg);
	else if (*format == 'u')
		display_unbr(*(unsigned int *)specifier->arg);
	else if (*format == 'x')
		display_as(*(int *)specifier->arg, "0123456789abcdef");
	else if (*format == 'X')
		display_as(*(int *)specifier->arg, "0123456789ABCDEF");
	else if (*format == '%')
		display_char('%');
	else
		return (0);
	return (1);
}
