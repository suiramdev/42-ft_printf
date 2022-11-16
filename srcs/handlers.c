/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:02:29 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 11:13:11 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "handlers.h"
#include "string.h"

int handle_flag(const char *format, t_specifier *specifier)
{
	return (0);
}

int	handle_type(const char *format, t_specifier *specifier)
{
	size_t	i;

	i = 0;
	if (format[0] == 's')
	{
		write(1, (char *)specifier->arg, ft_strlen((char *)specifier->arg));
		i++;
	}
	return (i);
}
