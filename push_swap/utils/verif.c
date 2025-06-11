/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:34:51 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 13:19:12 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	verif_duplicate(long long *num, int argc)
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

static long long	*verif_int_option_1(char **argv)
{
	int			y;
	int			i;
	long long	*num;

	num = malloc(sizeof(long long) * count_number(argv[1]));
	if (!num)
		return (NULL);
	i = 0;
	y = 0;
	while (argv[1][y])
	{
		while (argv[1][y] == ' ')
			y++;
		num[i] = ft_atoi(&argv[1][y]);
		if (num[i] < -2147483648 || num[i] > 2147483647)
			return (free(num), NULL);
		while (argv[1][y] != '\0'
			&& ((argv[1][y] >= '0' && argv[1][y] <= '9') || argv[1][y] == '-'))
			y++;
		while (argv[1][y] == ' ')
			y++;
		i++;
	}
	return (num);
}

static long long	*verif_int_option_2(char **argv, int argc)
{
	int			x;
	int			i;
	long long	*num;

	num = malloc(sizeof(long long) * argc - 1);
	if (!num)
		return (NULL);
	x = 1;
	i = 0;
	while (argv[x])
	{
		num[i] = ft_atoi(argv[x]);
		if (num[i] < -2147483648 || num[i] > 2147483647)
			return (free(num), NULL);
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
			if ((argv[x][y] < '0' || argv[x][y] > '9')
				&& argv[x][y] != '-' && argv[x][y] != ' ')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	verif(char **argv, int argc)
{
	long long	*num;

	if (verif_num(argv) == 0)
		return (0);
	if (argc == 2)
		num = verif_int_option_1(argv);
	else
		num = verif_int_option_2(argv, argc);
	if (!num)
		return (0);
	if (verif_duplicate(num, argc) == 0)
		return (free(num), 0);
	free(num);
	return (1);
}
