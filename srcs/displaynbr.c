/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaynbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:24:15 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/21 14:24:26 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "converters.h"
#include "string.h"

size_t	display_nbr(int nbr)
{
	size_t	bytes;
	char	*converted;

	bytes = 0;
	converted = ft_ltob(nbr, "0123456789");
	if (converted)
		bytes = write(1, converted, ft_strlen(converted));
	free(converted);
	return (bytes);
}

size_t	display_unbr(unsigned int nbr)
{
	size_t	bytes;
	char	*converted;

	bytes = 0;
	converted = ft_ltob(nbr, "0123456789");
	if (converted)
		bytes = write(1, converted, ft_strlen(converted));
	free(converted);
	return (bytes);
}

#include "stdio.h"

size_t	display_ptr(void *ptr)
{
	size_t	bytes;
	char	*converted;

	if (!ptr)
		return (write(1, "(nil)", 5));
	bytes = 0;
	converted = ft_ultop((unsigned long)ptr);
	if (converted)
		bytes = write(1, converted, ft_strlen(converted));
	free(converted);
	return (bytes);
}

size_t	display_as(long nbr, const char *base)
{
	size_t	bytes;
	char	*converted;

	bytes = 0;
	converted = ft_ltob(nbr, base);
	if (converted)
		bytes = write(1, converted, ft_strlen(converted));
	free(converted);
	return (bytes);
}
