/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:43:15 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/08 16:18:56 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(n_list *list)
{
	int	value;

	if (!list || !list->next)
		return (0);
	value = list->content;
	list->content = list->next->content;
	list->next->content = value;
	return (1);
}
