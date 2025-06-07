# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 13:26:08 by cade-jes          #+#    #+#              #
#    Updated: 2025/06/07 02:33:39 by cade-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	main.c \
				push_swap.c
				

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
	make -C $(LIBFT) clean
	$(RM) $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re