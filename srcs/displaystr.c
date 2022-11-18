/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaystr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:03 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/18 12:52:31 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "string.h"

size_t	display_char(char c)
{
	return (write(1, &c, 1));
}

size_t	display_str(const char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
