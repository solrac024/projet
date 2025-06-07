/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/07 02:53:49 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*preparation_b(int len)
{
	int	*result;

	if (len % 2 == 1)
		len++;
	result = malloc(sizeof(int) * len / 2);
	if (!result)
		return (NULL);
	return (result);
}

static int	*preparation_a(char **argv, int len)
{
	int	x;
	int	i;
	int	*result;

	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	x = 1;
	i = 0;
	while (argv[x])
	{
		result[i] = ft_atoi(argv[x]);
		i++;
		x++;
	}
	return (result);
}

static int	verif(char **argv)
{
	int	x;
	int	y;
	int	len;

	len = 0;
	x = 1;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			if ((argv[x][y] < '0' || argv[x][y] > '9') && argv[x][y] != '-')
				return (0);
			if (argv[x][y + 1] == 0)
				len++;
			y++;
		}
		x++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	int	len;
	int	*list_a;
	int	*list_b;
	
	if (argc < 2)
		return (ft_printf("Error\n"));
	len = verif(argv);
	if (len == 0)
		return (ft_printf("Error\n"));
	list_a = preparation_a(argv, len);
	if (!list_a)
		return (ft_printf("Error\n"));
	list_b = preparation_b(len);
	if (!list_b)
		return (free(list_a), ft_printf("Error\n"));
	push_swap(list_a, list_b, len);
	return (free(list_a), free(list_b), 0);
}
