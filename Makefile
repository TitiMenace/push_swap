# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschecro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 01:52:49 by tschecro          #+#    #+#              #
#    Updated: 2023/03/18 00:24:49 by tschecro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES		=	init_struct.c moves_utils.c push_swap_utils.c \
			singletone.c push_moves.c  reverse_rotate.c \
			init_stack.c rotate.c swap_moves.c three_algo.c \
			debug_utils.c algo.c find_values.c cost_calcul.c \
			parsing_index.c init_stack_utils.c setup_stacks.c \
			struct_cost.c push_swap.c


SRCS_DIR 		= src

HEADER_FILES	=	ft_push_swap.h \
			includes.h \
			struct.h 

HEADER		= includes

SRC		=	$(addprefix $(SRCS_DIR)/,$(SRC_FILES))

OBJ_DIR = .build

OBJ		= 	$(patsubst $(SRCS_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC) )

NAME	=	push_swap	



CC		=	cc

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o 		:	$(SRCS_DIR)/%.c
			mkdir -p $(OBJ_DIR)
			$(CC) -Wall -Wextra -Werror -g3 -c -I $(HEADER) $< -o $@

clean	:
			rm -rf $(OBJ_DIR)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

bonus	:	all

.PHONY	:	all clean fclean re
