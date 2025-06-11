/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:43:15 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 13:13:43 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_liste **list)
{
	int	value;

	value = (*list)->content;
	(*list)->content = (*list)->next->content;
	(*list)->next->content = value;
}

void	swap_a(t_liste **list_a)
{
	swap(list_a);
	ft_printf("sa\n");
}

void	swap_b(t_liste **list_b)
{
	swap(list_b);
	ft_printf("sb\n");
}

void	swap_ab(t_liste **list_a, t_liste **list_b)
{
	swap(list_a);
	swap(list_b);
	ft_printf("ss\n");
}
