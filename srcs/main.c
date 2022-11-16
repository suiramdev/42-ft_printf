/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:14:21 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/16 19:09:36 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	void	*ptr;

	ft_printf("c : %c\n", 'a');
	ft_printf("s : %s\n", "Hello World");
	ptr = malloc(1);
	ft_printf("p : %p\n", ptr);
	free(ptr);
	ft_printf("d : %d\n", 100); // to fix
	ft_printf("i : %i\n", 100);
	ft_printf("u : %u\n", -100);
	ft_printf("x : %x\n", 25);
	ft_printf("X : %X\n", 25);
	ft_printf("%% : %%\n");
}
