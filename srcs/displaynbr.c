/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaynbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:24:15 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/21 15:49:26 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "string.h"

size_t	display_hex(unsigned long nbr, const char *base)
{
	size_t	base_len;
	size_t	bytes;
	char	c;

	base_len = ft_strlen(base);
	bytes = 1;
	c = base[nbr % base_len];
	nbr /= base_len;
	if (nbr > 0)
		bytes += display_hex(nbr, base);
	write(1, &c, 1);
	return (bytes);
}

size_t	display_nbr(int nbr)
{
	size_t	bytes;
	char	c;

	bytes = 1;
	if (nbr < 0)
	{
		if (nbr <= INT_MIN)
			return (write(1, "-2147483648", 11));
		bytes += write(1, "-", 1);
		nbr = -nbr;
	}
	c = '0' + nbr % 10;
	nbr /= 10;
	if (nbr > 0)
		bytes += display_nbr(nbr);
	write(1, &c, 1);
	return (bytes);
}

size_t	display_unbr(unsigned int nbr)
{
	size_t	bytes;
	char	c;

	bytes = 1;
	c = '0' + nbr % 10;
	nbr /= 10;
	if (nbr > 0)
		bytes += display_nbr(nbr);
	write(1, &c, 1);
	return (bytes);
}

size_t	display_ptr(void *ptr)
{
	size_t	bytes;

	if (!ptr)
		return (write(1, "(nil)", 5));
	bytes = write(1, "0x", 2);
	bytes += display_hex((unsigned long)ptr, "0123456789abcdef");
	return (bytes);
}
