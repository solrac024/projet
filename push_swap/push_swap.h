/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:57 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 12:16:44 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct new_list
{
	int				content;
	struct new_list	*next;
}				t_liste;

// main.c

int		main(int argc, char **argv);

// verif.c

int		verif(char **argv, int argc);

// list.c

void	*ft_lstclean_ps(t_liste **list);
t_liste	*ft_lst_a_option_1(char **argv);
t_liste	*ft_lst_a_option_2(char **argv);
t_liste	*ft_lst_b_new(void);

// algorithm

void	push_swap(t_liste **list_a, t_liste **list_b);
void	find_median(t_liste **list_a, t_liste **list_b);

// instruction

void	swap_a(t_liste **list_a);
void	swap_b(t_liste **list_b);
void	swap_ab(t_liste **list_a, t_liste **list_b);
void	push_a(t_liste **list_a, t_liste **list_b);
void	push_b(t_liste **list_a, t_liste **list_b);
void	rotate_a(t_liste **list_a);
void	rotate_b(t_liste **list_b);
void	rotate_ab(t_liste **list_a, t_liste **list_b);
void	reverse_rotate_a(t_liste **list_a);
void	reverse_rotate_b(t_liste **list_b);
void	reverse_rotate_ab(t_liste **list_a, t_liste **list_b);

// checkers

int		checker_median(t_liste *list_a, t_liste *list_b);
int		checker_ascending(t_liste *list_a);
int		checker_descending(t_liste *list_b);

// utils

int		find_min(t_liste *list_a);
int		find_max(t_liste *list_a);
int		len_lst(t_liste *list_a);
void	push_swap_exception(t_liste **list_a);
int		count_number(char *argv);

#endif