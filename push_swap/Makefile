# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 13:26:08 by cade-jes          #+#    #+#              #
#    Updated: 2025/06/09 17:02:51 by cade-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	list.c \
				main.c \
				push.c \
				push_swap.c \
				reverse_rotate.c \
				rotate.c \
				swap.c \
				verif.c

OBJ_DIR		=	obj
OBJS		=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

CC			=	cc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -g3

LIBFT		=	./libft
LIBFT_A		=	$(LIBFT)/libft.a

all: $(NAME)

$(OBJ_DIR)/%.o:	%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(LIBFT_A) $(OBJS)
	cp $(LIBFT_A) $(NAME)
	ar -rsc $(NAME) $(OBJS)

$(LIBFT_A):
	make -C $(LIBFT) all

clean:
	make -C $(LIBFT) fclean
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re