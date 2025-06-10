/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:49 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 17:32:20 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_liste *list_a)
{
	int	i;
	
	i = list_a->content;
	while (list_a->next != NULL)
	{
		if (i > list_a->next->content)
			i = list_a->next->content;
		list_a = list_a->next;
	}
	return (i);
}

int	find_max(t_liste *list_a)
{
	int	i;
	
	i = list_a->content;
	while (list_a->next != NULL)
	{
		if (i < list_a->next->content)
			i = list_a->next->content;
		list_a = list_a->next;
	}
	return (i);
}

int	len_lst(t_liste *list_a)
{
	int	i;

	i = 0;
	while (list_a != NULL)
	{
		list_a = list_a->next;
		i++;
	}
	return (i);
}
