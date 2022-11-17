/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaynbr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:25:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:26:06 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAYNBR_H
# define DISPLAYNBR_H

# include <stddef.h>

size_t	display_nbr(int nbr);
size_t	display_unbr(unsigned int nbr);
size_t	display_ptr(void *ptr);
size_t	display_as(int nbr, const char *base);

#endif
