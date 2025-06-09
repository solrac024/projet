/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/09 16:56:54 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_liste	*list_a;
	t_liste	*list_b;

	if (argc < 2 || verif(argv, argc) == 0)
		return (ft_printf("Error\n"), 0);
	list_a = ft_lst_a_new(argv);
	if (!list_a)
		return (ft_printf("Error\n"), 0);
	list_b = ft_lst_b_new();
	if (!list_b)
		return (ft_lstclean_ps(&list_a), ft_printf("Error\n"), 0);
	return (ft_lstclean_ps(&list_a), ft_lstclean_ps(&list_b), 0);
}
