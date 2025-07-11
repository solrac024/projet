/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:37:48 by cade-jes          #+#    #+#             */
/*   Updated: 2025/05/28 11:22:23 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*dst;

	dst = (char *)s;
	i = 0;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
	s = (void *)dst;
}
