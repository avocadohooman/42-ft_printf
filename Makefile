# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 12:56:11 by gmolin            #+#    #+#              #
#    Updated: 2020/01/08 17:02:35 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

FLAGS = -Wall -Wextra -Werror

SRCS1 = ./srcs/main.c ./srcs/ft_printf.c ./srcs/conversion_distributor.c \
		./srcs/modifier_setup.c ./srcs/c_conversion.c ./srcs/helperfn.c 

OBJS = $(subst .c,.o,$(subst srcs/,,$(SRCS1)))

LIB = -L./libft -lft

INCL = -I ./includes/ -I ./libft/includes/

all: libftcreator
	@gcc $(FLAGS) -c $(SRCS1) $(INCL)
	@gcc $(FLAGS) $(INCL) $(OBJS) $(LIB) -o $(NAME)

libftcreator:
	@make -s -C libft

clean:
	@rm -f $(OBJS)
	@make -s clean -C libft

fclean: clean
	@rm -f $(NAME)
	@make -s fclean -C libft
	
re: clean all