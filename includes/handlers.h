/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:13 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:59:05 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

# include <stdarg.h>
# include <stddef.h>

typedef struct s_specifier
{
	int		flag;
}	t_specifier;

size_t	handle_all(const char *format, va_list *args, t_specifier *specifier, size_t *count);
size_t	handle_flag(const char *format, t_specifier *specifier, size_t *count);
size_t	handle_type(const char *format, va_list *args, t_specifier *specifier, size_t *count);

#endif
