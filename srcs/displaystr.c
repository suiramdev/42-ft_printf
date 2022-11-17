/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:03 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:26:31 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
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
