/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:00:53 by cade-jes          #+#    #+#             */
/*   Updated: 2025/05/28 11:22:55 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	dst = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s))
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
