/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/08 16:59:27 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

n_list	*ft_lstclean_ps(n_list **list)
{
	if ((*list)->next != NULL)
		ft_lstclean_ps(&(*list)->next);
	free((*list));
	(*list) = NULL;
	return (NULL);
}

n_list	*ft_lst_a_new(char **argv)
{
	int		x;
	n_list	*list;
	n_list	*new;
	n_list	*first;

	list = malloc(sizeof(n_list));
		if (!list)
			return (NULL);
	list->content = ft_atoi(argv[1]);
	list->next = NULL;
	first = list;
	x = 2;
	while (argv[x])
	{
		new = malloc(sizeof(n_list));
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

static int	verif(char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			if ((argv[x][y] < '0' || argv[x][y] > '9') && argv[x][y] != '-')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	n_list	*list_a;

	if (argc < 2 || verif(argv) == 0)
		return (ft_printf("Error\n"));
	list_a = ft_lst_a_new(argv);
	if (!list_a)
		return (ft_printf("Error\n"));
	ft_lstclean_ps(&list_a);
	return (0);
}
