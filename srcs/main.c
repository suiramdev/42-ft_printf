/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <mnouchet>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:14:21 by mnouchet          #+#    #+#             */
/*   Updated: 2022/11/17 12:11:26 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	void	*ptr;

	ptr = malloc(1);
	ft_printf("c : %c\n", 'a');
	ft_printf("s : %s\n", "Hello World");
	ft_printf("p : %p\n", ptr);
	ft_printf("d : %d\n", 100); // to fix
	ft_printf("i : %i\n", 100);
	ft_printf("u : %u\n", -100);
	ft_printf("x : %x\n", 25);
	ft_printf("X : %X\n", 25);
	ft_printf("%% : %%\n");
	printf("--------------------\n");
	printf("c : %c\n", 'a');
	printf("s : %s\n", "Hello World");
	printf("p : %p\n", ptr);
	printf("d : %d\n", 100); // to fix
	printf("i : %i\n", 100);
	printf("u : %u\n", -100);
	printf("x : %x\n", 25);
	printf("X : %X\n", 25);
	printf("%% : %%\n");
	free(ptr);
}
