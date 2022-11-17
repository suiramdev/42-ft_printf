/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:03 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:12:20 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "converters.h"
#include "string.h"

size_t	display_char(char c)
{
	if (!c)
		return (-1);
	return (write(1, &c, 1));
}

size_t	display_str(const char *s)
{
	if (!s)
		return (-1);
	return (write(1, s, ft_strlen(s)));
}

size_t	display_nbr(int nbr)
{
	size_t	bytes;
	char	*converted;

	bytes = -1;
	if (nbr)
	{
		converted = ft_itoa_base(nbr, "0123456789");
		if (converted)
			bytes = write(1, converted, ft_strlen(converted));
		free(converted);
	}
	return (bytes);
}

size_t	display_unbr(unsigned int nbr)
{
	size_t	bytes;
	char	*converted;

	bytes = -1;
	if (nbr)
	{
		converted = ft_itoa_base(nbr, "0123456789");
		if (converted)
			bytes = write(1, converted, ft_strlen(converted));
		free(converted);
	}
	return (bytes);
}

size_t	display_ptr(void *ptr)
{
	size_t	bytes;
	char	*converted;

	if (!ptr)
		return (write(1, "(nil)", 5));
	bytes = write(1, "0x", 2);
	converted = ft_itoa_base((long)ptr, "0123456789abcdef");
	bytes += write(1, converted, ft_strlen(converted));
	return (bytes);
}

size_t	display_as(long nbr, const char *base)
{
	size_t	bytes;
	char	*converted;

	bytes = -1;
	if (nbr)
	{
		converted = ft_itoa_base(nbr, base);
		if (converted)
			bytes = write(1, converted, ft_strlen(converted));
		free(converted);
	}
	return (bytes);
}
