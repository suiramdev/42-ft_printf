/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:13 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:43 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

typedef struct	s_specifier
{
	void	*arg;
	int		flag;
}	t_specifier;

int	handle_flag(const char *format, t_specifier *specifier);
int	handle_type(const char *format, t_specifier *specifier);

#endif
