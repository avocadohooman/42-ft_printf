# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 12:56:11 by gmolin            #+#    #+#              #
#    Updated: 2020/01/22 12:59:29 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

EXE = ft_printf

FLAGS = -Wall -Wextra -Werror

LIBFT_FOLDER = ./libft/

LIB = ./libft/libft.a

LIB_OBJ = ./libft/*.o

SRCS1 = ./srcs/ft_printf.c ./srcs/conversion_distributor.c \
		./srcs/modifier_setup.c ./srcs/c_conversion.c ./srcs/helper_print.c \
		./srcs/s_conversion.c ./srcs/p_conversion.c ./srcs/id_conversion.c \
		./srcs/helper_converter.c ./srcs/o_conversion.c ./srcs/u_conversion.c \
		./srcs/x_conversion.c ./srcs/helper_swap.c ./srcs/f_conversion.c

SRCS2 = main.c ./srcs/ft_printf.c ./srcs/conversion_distributor.c \
		./srcs/modifier_setup.c ./srcs/c_conversion.c ./srcs/helper_print.c \
		./srcs/s_conversion.c ./srcs/p_conversion.c ./srcs/id_conversion.c \
		./srcs/helper_converter.c ./srcs/o_conversion.c ./srcs/u_conversion.c \
		./srcs/x_conversion.c ./srcs/helper_swap.c ./srcs/f_conversion.c

OBJS = $(subst .c,.o,$(subst srcs/,,$(SRCS1)))

OBJS2 = $(subst .c,.o,$(subst srcs/,,$(SRCS2)))

INCL = -I ./includes/ -I ./libft/includes/



all: $(NAME)

$(NAME): $(SRCS1)
	@make -s -C $(LIBFT_FOLDER)
	@cp $(LIB) ./$(NAME)
	@gcc $(FLAGS) $(INCLUDES) -c $(SRCS1)
	@ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	@rm -f $(OBJS) $(LIB_OBJ)
	@make -s clean -C libft

fclean: clean
	@rm -f $(NAME)
	@make -s fclean -C libft
	
re: fclean all

run: 
	@gcc -c $(SRCS2) $(INCL)
	@gcc $(INCL) $(OBJS2) $(LIB) -o $(EXE)
	
printf: clean run
		@rm -f $(OBJS2)
		@make -s clean -C libft

.PHONY: clean fclean re all