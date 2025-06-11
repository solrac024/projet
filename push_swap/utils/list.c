/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:08:39 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 15:00:38 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_lstclean_ps(t_liste **list)
{
	if ((*list)->next != NULL)
		ft_lstclean_ps(&(*list)->next);
	free((*list));
	(*list) = NULL;
	return (NULL);
}

static int	help_for_down(char **argv, t_liste **list, int y)
{
	t_liste	*new;

	while (argv[1][y])
	{
		while (argv[1][y] == ' ')
			y++;
		new = malloc(sizeof(t_liste));
		if (!new)
			return (0);
		new->content = ft_atoi(&argv[1][y]);
		new->next = NULL;
		(*list)->next = new;
		(*list) = (*list)->next;
		while (argv[1][y] != '\0'
			&& ((argv[1][y] >= '0' && argv[1][y] <= '9')
			|| argv[1][y] == '-'))
			y++;
		while (argv[1][y] == ' ')
			y++;
	}
	return (1);
}

t_liste	*ft_lst_a_option_1(char **argv)
{
	int		i;
	int		y;
	t_liste	*list;
	t_liste	*first;

	list = malloc(sizeof(t_liste));
	if (!list)
		return (NULL);
	list->content = ft_atoi(argv[1]);
	list->next = NULL;
	first = list;
	y = 0;
	while (argv[1][y] == ' ')
		y++;
	while ((argv[1][y] >= '0' && argv[1][y] <= '9') || argv[1][y] == '-')
		y++;
	i = help_for_down(argv, &list, y);
	if (i == 0)
		return (ft_lstclean_ps(&first), NULL);
	return (first);
}

t_liste	*ft_lst_a_option_2(char **argv)
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
