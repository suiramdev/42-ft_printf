/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:44:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 18:21:30 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

#include <stddef.h>

size_t	display_char(char c);
size_t	display_str(const char *s);
size_t	display_nbr(int nbr);
size_t	display_unbr(unsigned int nbr);
size_t	display_ptr(void *ptr);
size_t	display_as(int nbr, const char *base);

#endif
