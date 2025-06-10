/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/10 18:07:10 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_liste	*list_a;
	t_liste	*list_b;
	int		min;
	int		max;

	if (argc < 2 || verif(argv, argc) == 0)
		return (ft_printf("Error\n"), 0);
	list_a = ft_lst_a_new(argv);
	if (!list_a)
		return (ft_printf("Error\n"), 0);
	list_b = ft_lst_b_new();
	if (!list_b)
		return (ft_lstclean_ps(&list_a), ft_printf("Error\n"), 0);
	min = find_min(list_a);
	max = find_max(list_a);
	if (len_lst(list_a) < 4 && len_lst(list_a) > 1)
		push_swap_exception(&list_a);
	else
		push_swap(&list_a, &list_b, min, max);
	return (ft_lstclean_ps(&list_a), 0);
}
