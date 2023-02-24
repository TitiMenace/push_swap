# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschecro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 01:52:49 by tschecro          #+#    #+#              #
#    Updated: 2023/02/24 20:20:53 by tschecro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	./init_struct.c ./moves_utils.c ./push_swap_utils.c \
			./singletone.c ./push_moves.c  ./reverse_rotate.c \
			./init_stack.c ./rotate.c ./swap_moves.c


HEADER	=	ft_push_swap.h \
			includes.h \
			struct.h 

OBJ		=	$(SRC:.c=.o)

NAME	=	libpushswap.a	

CC		=	cc

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			ar rc $(NAME) $(OBJ)

%.o		:	%.c
			$(CC) -Wall -Wextra -Werror -g -c $< -o $@

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

bonus	:	all

.PHONY	:	all clean fclean re