/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:40:35 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/06 14:11:21 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif(char **argv)
{
	int	x;
	int	y;
	int	len;

	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			if ((argv[x][y] < '0' || argv[x][y] > '9') && argv[x][y] != ' ')
				return (0);
			if (argv[x][y + 1] == ' ' || argv[x][y + 1] == 0)
				len++;
			y++;
		}
		x++;
	}
	return (len);
}

char	*preparation(char **argv, int len)
{
	int	i;

	
}

int	main(int argc, char **argv)
{
	int	len;
	if (argc < 2)
		return (ft_printf("Error\n"));
	
	len = verif(argv);
}