## ########################################################################## ##
##                                                                            ##
##                                                        :::      ::::::::   ##
##   Makefile                                           :+:      :+:    :+:   ##
##                                                    +:+ +:+         +:+     ##
##   By: mnouchet <mnouchet>                        +#+  +:+       +#+        ##
##                                                +#+#+#+#+#+   +#+           ##
##   Created: 2022/11/15 10:56:41 by mnouchet          #+#    #+#             ##
##   Updated: 2022/11/15 19:23:28 by mnouchet         ###   ########.fr       ##
##                                                                            ##
## ########################################################################## ##

NAME = libprintf.a

SOURCES_DIR = ./srcs
SOURCES = main.c

INCLUDES_DIR = ./includes

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SOURCES:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -C $< -O $@

$(NAME): $(OBJECTS)
	ar -rsc $@ $^

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

all: $(NAME)
