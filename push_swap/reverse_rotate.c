/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:19:54 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 16:29:00 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_liste **list)
{
	t_liste	*start;
	t_liste	*swap;

	start = *list;
	while ((*list)->next->next != NULL)
		*list = (*list)->next;
	swap = (*list)->next;
	swap->next = start;
	(*list)->next = NULL;
	*list = swap;
}

void	reverse_rotate_a(t_liste **list_a)
{
	reverse_rotate(list_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_liste **list_b)
{
	reverse_rotate(list_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_ab(t_liste **list_a, t_liste **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	ft_printf("rrr\n");
}
