/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:16:11 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 22:24:53 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	first_condition(t_liste **list_a, t_liste **list_b)
{
	push_b(list_a, list_b);
	push_b(list_a, list_b);
	rotate_b(list_b);
	rotate_b(list_b);
	push_a(list_a, list_b);
	push_a(list_a, list_b);
	rotate_a(list_a);
	if ((*list_a)->content > (*list_a)->next->content)
		swap_a(list_a);
	rotate_a(list_a);
}

static void	second_condition(t_liste **list_a, t_liste **list_b)
{
	push_b(list_a, list_b);
	if ((*list_b)->content > (*list_b)->next->content)
		swap_b(list_b);
	rotate_b(list_b);
	rotate_b(list_b);
	push_a(list_a, list_b);
	if ((*list_a)->content > (*list_a)->next->content)
		swap_a(list_a);
	rotate_a(list_a);
	if ((*list_a)->content > (*list_a)->next->content)
		swap_a(list_a);
	rotate_a(list_a);
}

void	find_median(t_liste **list_a, t_liste **list_b)
{
	while (checker_median(*list_a, *list_b) != 1)
	{
		if ((*list_a)->content < (*list_a)->next->content
			&& (*list_b)->content < (*list_b)->next->content)
			swap_ab(list_a, list_b);
		else if ((*list_a)->content < (*list_a)->next->content)
			swap_a(list_a);
		else if ((*list_b)->content < (*list_b)->next->content)
			swap_b(list_b);
		if ((*list_a)->next->content > (*list_b)->content)
			first_condition(list_a, list_b);
		else if ((*list_a)->content > (*list_b)->next->content)
			second_condition(list_a, list_b);
		else
			rotate_b(list_b);
			rotate_a(list_a);
	}
}
