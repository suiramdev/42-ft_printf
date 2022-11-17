/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:13 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:17:46 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

# include <stdarg.h>

typedef struct s_specifier
{
	int		flag;
}	t_specifier;

int	handle_flag(const char *format, t_specifier *specifier);
int	handle_type(const char *format, va_list args, t_specifier *specifier);

#endif
