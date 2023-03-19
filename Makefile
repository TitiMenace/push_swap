# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschecro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 01:52:49 by tschecro          #+#    #+#              #
#    Updated: 2023/03/19 04:45:26 by tschecro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES		=	init_struct.c moves_utils.c push_swap_utils.c \
			singletone.c push_moves.c  reverse_rotate.c \
			init_stack.c rotate.c swap_moves.c three_algo.c \
			debug_utils.c algo.c find_values.c cost_calcul.c \
			parsing_index.c init_stack_utils.c setup_stacks.c \
			struct_cost.c push_swap.c

SRC_FILES_BONUS	=	checker.c get_next_line.c get_next_line_utils.c init_struct.c \
					moves_utils.c push_swap_utils.c singletone.c push_moves.c \
					reverse_rotate.c init_stack.c rotate.c swap_moves.c \
					init_stack_utils.c ft_split.c checker_utils.c

SRC_DIR_BONUS	= src_bonus

SRC_DIR 		= src

HEADER		= includes

SRC		=	$(addprefix $(SRC_DIR)/,$(SRC_FILES))

SRC_BONUS	=	$(addprefix $(SRC_DIR_BONUS)/,$(SRC_FILES_BONUS) )

OBJ_DIR = .build

OBJ_BONUS_DIR = .bonus_build

OBJ		= 	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC) )

OBJ_BONUS = 	$(patsubst $(SRC_DIR_BONUS)/%.c, $(OBJ_BONUS_DIR)/%.o, $(SRC_BONUS) )

NAME	=	push_swap	

CC		=	cc

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)
			@echo "\033[1;32m\nDone!\033[0m"

$(OBJ_DIR)/%.o 		:	$(SRC_DIR)/%.c
						@printf "\033[0;33m Generating push_swap object... %-38.38s \r" $@
						@mkdir -p $(OBJ_DIR)
						@$(CC) -Wall -Wextra -Werror -g3 -c -I $(HEADER) $< -o $@

clean	:
			rm -rf $(OBJ_DIR)
			rm -rf $(OBJ_BONUS_DIR)

fclean	:	clean
			rm -f $(NAME)
			rm -f checker

re		:	fclean all

bonus	:	$(OBJ_BONUS)
			$(CC) $(OBJ_BONUS) -o checker
			@echo "\033[1;32m\nDone!\033[0m"

$(OBJ_BONUS_DIR)/%.o 		:	$(SRC_DIR_BONUS)/%.c
								@printf "\033[0;33mGenerating libft object... %-38.38s \r" $@
								@mkdir -p $(OBJ_BONUS_DIR)
								@$(CC) -Wall -Wextra -Werror -g3 -c -I $(HEADER) $< -o $@


.PHONY	:	all clean fclean re
