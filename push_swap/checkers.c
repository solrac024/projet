/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:24:44 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 17:52:32 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_median(t_liste *list_a, t_liste *list_b)
{
	int	max;
	int	min;

	max = list_a->content;
	min = list_b->content;
	while (list_a->next != NULL)
	{
		if (max < list_a->next->content)
			max = list_a->next->content;
		list_a = list_a->next;
	}
	while (list_b->next != NULL)
	{
		if (min > list_b->next->content)
			min = list_b->next->content;
		list_b = list_b->next;
	}
	if (max < min)
		return (1);
	return (0);
}

int	checker_ascending(t_liste *list_a)
{
	while (list_a->next != NULL)
	{
		if (list_a->content > list_a->next->content)
			return (0);
		list_a = list_a->next;
	}
	return (1);
}

int	checker_descending(t_liste *list_b)
{
	while (list_b->next != NULL)
	{
		if (list_b->content < list_b->next->content)
			return (0);
		list_b = list_b->next;
	}
	return (1);
}
