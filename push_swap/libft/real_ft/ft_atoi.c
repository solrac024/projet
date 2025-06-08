/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:33:57 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/08 16:13:35 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *src)
{
	int	i;
	int	s;
	int	result;

	s = 1;
	i = 0;
	result = 0;
	while ((src[i] >= 9 && src[i] <= 13) || src[i] == ' ')
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			s = -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		result = result * 10 + (src[i] - '0');
		i++;
	}
	return (result * s);
}
