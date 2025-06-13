# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 13:26:08 by cade-jes          #+#    #+#              #
#    Updated: 2025/06/13 14:58:13 by cade-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

BONUS		=	checker

SRCS		=	main.c \
				algorithm/push_swap.c \
				algorithm/push_swap_2.c \
				verification/verification.c \
				instruction/push.c \
				instruction/reverse_rotate.c \
				instruction/rotate.c \
				instruction/swap.c \
				utils/verif.c \
				utils/list.c \
				utils/ft_util.c

BONUS_SRCS	=	checker.c

OBJ_DIR		=	obj
OBJS		=	$(SRCS:%.c=$(OBJ_DIR)/%.o)
BONUS_OBJS	=	$(BONUS_SRCS:%.c=$(OBJ_DIR)/%.o)

CC			=	cc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -g3

LIBFT		=	./libft
LIBFT_A		=	$(LIBFT)/libft.a

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
$(OBJ_DIR)/%.o:	%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_A):
	make -C $(LIBFT) all

$(NAME): $(OBJ_DIR) $(LIBFT_A) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_A)

bonus: $(OBJ_DIR) $(LIBFT_A) $(OBJS) $(BONUS_OBJS)
	$(CC) $(CFLAGS) -o $(BONUS) $(OBJS) $(BONUS_OBJS) $(LIBFT_A)

clean:
	make -C $(LIBFT) fclean
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re