/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 14:52:05 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_liste	*list_a;
	t_liste	*list_b;

	if (argc < 2 || verif(argv, argc) == 0)
		return (ft_printf("Error\n"), 0);
	if (argc == 2)
		list_a = ft_lst_a_option_1(argv);
	else
		list_a = ft_lst_a_option_2(argv);
	if (!list_a)
		return (ft_printf("Error\n"), 0);
	list_b = NULL;
	if (len_lst(list_a) < 4 && len_lst(list_a) > 1)
		push_swap_exception(&list_a);
	else
		push_swap(&list_a, &list_b);
	return (ft_lstclean_ps(&list_a), 0);
}
