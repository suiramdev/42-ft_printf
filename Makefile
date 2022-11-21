## ########################################################################## ##
##                                                                            ##
##                                                        :::      ::::::::   ##
##   Makefile                                           :+:      :+:    :+:   ##
##                                                    +:+ +:+         +:+     ##
##   By: mnouchet <mnouchet>                        +#+  +:+       +#+        ##
##                                                +#+#+#+#+#+   +#+           ##
##   Created: 2022/11/15 10:56:41 by mnouchet          #+#    #+#             ##
##   Updated: 2022/11/21 15:50:30 by mnouchet         ###   ########.fr       ##
##                                                                            ##
## ########################################################################## ##

NAME = libftprintf.a

SOURCES_DIR = ./srcs
SOURCES = ft_printf.c handlers.c string.c displaystr.c displaynbr.c

INCLUDES_DIR = ./includes

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(addprefix $(SOURCES_DIR)/, $(SOURCES:%.c=%.o))

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

$(NAME): $(OBJECTS)
	ar -rsc $@ $^

bonus: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

all: $(NAME)

.PHONY = all bonus clean fclean
