/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaynbr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:25:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/24 04:56:06 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAYNBR_H
# define DISPLAYNBR_H

# include <stddef.h>

size_t	display_as(unsigned int nbr, const char *base);
size_t	display_nbr(int nbr);
size_t	display_unbr(unsigned int nbr);
size_t	display_ptr(unsigned long ptr, int recursive);

#endif
