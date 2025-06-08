/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:17:15 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/08 13:18:36 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

n_list	*ft_lstnew_ps(int content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
