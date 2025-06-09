/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:33:57 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/09 16:54:10 by cade-jes         ###   ########.fr       */
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

t_liste	*ft_lstclean_ps(t_liste **list);
t_liste	*ft_lst_a_new(char **argv);
t_liste	*ft_lst_b_new(void);

// algorithm

void	push_swap(void);

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

#endif