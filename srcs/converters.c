/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:39:05 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 17:10:54 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "string.h"

static size_t	ft_digits(long nbr, int base_len)
{
	size_t digits;

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

char	*ft_itoa_base(long nbr, const char *base)
{
	size_t	base_len;
	int		negative;
	size_t	digits;
	char	*output;

	base_len = ft_strlen(base);
	negative = nbr < 0;
	if (negative)
		nbr = -nbr;
	digits = ft_digits(nbr, base_len);
	output = malloc(digits + negative + 1);
	if (output)
	{
		if (negative)
			output[0] = '-';
		output[digits + negative] = '\0';
		while (digits > 0)
		{
			output[digits - negative] = base[nbr % base_len];
			nbr /= base_len;
			digits--;
		}
	}
	return (output);
}
