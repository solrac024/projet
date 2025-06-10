/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:58:31 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 16:29:02 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_liste **list)
{
	t_liste	*start;
	t_liste	*swap;

	swap = *list;
	start = (*list)->next;
	while ((*list)->next != NULL)
		*list = (*list)->next;
	(*list)->next = swap;
	swap->next = NULL;
	*list = start;
}

void	rotate_a(t_liste **list_a)
{
	rotate(list_a);
	ft_printf("ra\n");
}

void	rotate_b(t_liste **list_b)
{
	rotate(list_b);
	ft_printf("rb\n");
}

void	rotate_ab(t_liste **list_a, t_liste **list_b)
{
	rotate(list_a);
	rotate(list_b);
	ft_printf("rr\n");
}
