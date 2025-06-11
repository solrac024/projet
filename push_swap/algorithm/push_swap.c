/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:38:33 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 22:23:56 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	separation(t_liste **list_a, t_liste **list_b)
{
	int	i;

	if (checker_ascending(*list_a) == 1)
		return (1);
	i = len_lst(*list_a) / 2 - 1;
	push_b(list_a, list_b);
	while (i != 0)
	{
		push_b(list_a, list_b);
		i--;
	}
	return (0);
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

void	push_swap(t_liste **list_a, t_liste **list_b)
{
	int	min;
	int	max;

	min = find_min(*list_a);
	max = find_max(*list_a);
	if (separation(list_a, list_b) == 1)
		return (free(*list_b));
	find_median(list_a, list_b);
	sort_list_a(list_a, min);
	sort_list_b(list_b, max);
	assembly(list_a, list_b, min);
}
