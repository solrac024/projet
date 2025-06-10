/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:52:11 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 16:28:57 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_liste **list_1, t_liste **list_2)
{
	t_liste	*swap;

	swap = (*list_1)->next;
	(*list_1)->next = *list_2;
	*list_2 = *list_1;
	*list_1 = swap;
}

void	push_a(t_liste **list_a, t_liste **list_b)
{
	push(list_b, list_a);
	ft_printf("pa\n");
}

void	push_b(t_liste **list_a, t_liste **list_b)
{
	push(list_a, list_b);
	ft_printf("pb\n");
}
