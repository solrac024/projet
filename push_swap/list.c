/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:08:39 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/09 13:50:46 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_liste	*ft_lstclean_ps(t_liste **list)
{
	if ((*list)->next != NULL)
		ft_lstclean_ps(&(*list)->next);
	free((*list));
	(*list) = NULL;
	return (NULL);
}

t_liste	*ft_lst_b_new(void)
{
	t_liste	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = 0;
	list->next = NULL;
	return (list);
}

t_liste	*ft_lst_a_new(char **argv)
{
	int		x;
	t_liste	*list;
	t_liste	*new;
	t_liste	*first;

	list = malloc(sizeof(t_liste));
		if (!list)
			return (NULL);
	list->content = ft_atoi(argv[1]);
	list->next = NULL;
	first = list;
	x = 2;
	while (argv[x])
	{
		new = malloc(sizeof(t_liste));
		if (!new)
			return (ft_lstclean_ps(&first));
		new->content = ft_atoi(argv[x]);
		new->next = NULL;
		list->next = new;
		list = list->next;
		x++;
	}
	return (first);
}
