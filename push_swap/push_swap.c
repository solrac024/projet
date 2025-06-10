/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:38:33 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 18:06:43 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_exception(t_liste **list_a)
{
	while (checker_ascending(*list_a) != 1)
	{
		if ((*list_a)->content < (*list_a)->next->content)
			swap_a(list_a);
		rotate_a(list_a);
	}
}

static void	separation(t_liste **list_a, t_liste **list_b)
{
	int	i;

	i = len_lst(*list_a) / 2 - 1;
	push_b(list_a, list_b);
	free((*list_b)->next);
	(*list_b)->next = NULL;
	while (i != 0)
	{
		push_b(list_a, list_b);
		i--;
	}
}

static void	find_median(t_liste **list_a, t_liste **list_b)
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
		else if ((*list_a)->content > (*list_b)->next->content)
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
		else
			rotate_b(list_b);
	}
}

void	sort_list_a(t_liste **list_a, int min)
{
	while (checker_ascending(*list_a) != 1)
	{
		if ((*list_a)->next->content == min)
			rotate_a(list_a);
		else
		{
			if ((*list_a)->content > (*list_a)->next->content)
				swap_a(list_a);
			rotate_a(list_a);
		}
	}
}

void	sort_list_b(t_liste **list_b, int max)
{
	while (checker_descending(*list_b) != 1)
	{
		if ((*list_b)->next->content == max)
			rotate_b(list_b);
		else
		{
			if ((*list_b)->content < (*list_b)->next->content)
				swap_b(list_b);
			rotate_b(list_b);
		}
	}
}

void	assembly(t_liste **list_a, t_liste **list_b, int min)
{
	while ((*list_b) != NULL)
		push_a(list_a, list_b);
	while ((*list_a)->content != min)
		rotate_a(list_a);
}

void	push_swap(t_liste **list_a, t_liste **list_b, int min, int max)
{
	separation(list_a, list_b);
	find_median(list_a, list_b);
	sort_list_a(list_a, min);
	sort_list_b(list_b, max);
	assembly(list_a, list_b, min);
}
