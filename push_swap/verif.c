/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:34:51 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/09 13:33:50 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	verif_duplicate(int *num, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (num[i] == num[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	verif_int(int *num, int	argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (num[i] < -2147483648 || num[i] > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

static int	*atoi_to_argv(char **argv, int argc)
{
	int	x;
	int	i;
	int	*num;

	num = malloc(sizeof(int) * argc - 1);
	if (!num)
		return (NULL);
	x = 1;
	i = 0;
	while (argv[x])
	{
		num[i] = ft_atoi(argv[x]);
		x++;
		i++;
	}
	return (num);
}

static int	verif_num(char **argv)
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

int	verif(char **argv, int argc)
{
	int	*num;
	
	if (verif_num(argv) == 0)
		return (0);
	num = atoi_to_argv(argv, argc);
	if (!num)
		return (0);
	if (verif_int(num, argc) == 0)
		return (free(num), 0);
	if (verif_duplicate(num, argc) == 0)
		return (free(num), 0);
	free(num);
	return (1);
}
