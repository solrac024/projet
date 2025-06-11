# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 13:26:08 by cade-jes          #+#    #+#              #
#    Updated: 2025/06/11 13:33:20 by cade-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	main.c \
				algorithm/push_swap.c \
				algorithm/push_swap_2.c \
				checker/checkers.c \
				instruction/push.c \
				instruction/reverse_rotate.c \
				instruction/rotate.c \
				instruction/swap.c \
				utils/verif.c \
				utils/list.c \
				utils/ft_util.c

OBJ_DIR		=	obj
OBJS		=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

CC			=	cc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -g3

LIBFT		=	./libft
LIBFT_A		=	$(LIBFT)/libft.a

all: $(NAME)

$(OBJ_DIR)/%.o:	%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(LIBFT_A) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_A)

$(LIBFT_A):
	make -C $(LIBFT) all

clean:
	make -C $(LIBFT) fclean
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re