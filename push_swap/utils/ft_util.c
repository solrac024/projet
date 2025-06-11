/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:49 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 13:19:01 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_number(char *argv)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (argv[i])
	{
		while (argv[i] == ' ')
			i++;
		while (argv[i] != ' ' && argv[i])
			i++;
		if (argv[i - 1] >= '0' && argv[i - 1] <= '9')
			number++;
	}
	return (number);
}

void	push_swap_exception(t_liste **list_a)
{
	while (checker_ascending(*list_a) != 1)
	{
		if ((*list_a)->content < (*list_a)->next->content)
			swap_a(list_a);
		rotate_a(list_a);
	}
}

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
