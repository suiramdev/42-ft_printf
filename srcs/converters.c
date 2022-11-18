/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:39:05 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/18 16:39:14 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "string.h"

static size_t	ft_digits(unsigned long nbr, int base_len)
{
	size_t	digits;

	if (nbr == 0)
		return (1);
	digits = 0;
	while (nbr > 0)
	{
		nbr /= base_len;
		digits++;
	}
	return (digits);
}

char	*ft_ltob(long nbr, const char *base)
{
	size_t			base_len;
	int				negative;
	unsigned long	u_nbr;
	size_t			digits;
	char			*output;

	base_len = ft_strlen(base);
	negative = nbr < 0;
	u_nbr = nbr;
	if (negative)
		u_nbr = -nbr;
	digits = ft_digits(u_nbr, base_len);
	output = malloc(digits + negative + 1);
	if (output)
	{
		if (negative)
			output[0] = '-';
		output[digits + negative] = '\0';
		while (digits > 0)
		{
			output[digits + negative - 1] = base[u_nbr % base_len];
			u_nbr /= base_len;
			digits--;
		}
	}
	return (output);
}

char	*ft_ultop(unsigned long nbr)
{
	size_t	digits;
	char	*output;

	digits = ft_digits(nbr, 16);
	output = malloc(digits + 2 + 1);
	if (output)
	{
		output[digits + 2] = '\0';
		output[0] = '0';
		output[1] = 'x';
		while (digits > 0)
		{
			output[digits + 1] = "0123456789abcdef"[nbr % 16];
			nbr /= 16;
			digits--;
		}
	}
	return (output);
}
