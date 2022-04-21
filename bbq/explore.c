/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:53:36 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 19:01:00 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file_functions.h"

void	fn_square(int x, int y int i)
{
	//almacenamiento del cuadro mayor
}

int	fn_summation(int **map, int x, int y, int i)
{
	//sumatoria del mapping
}

void fn_mapping(int **map, int xsize, ysize)
{
	int	x;
	int	y;
	int	i;
	int s;

	while (y + i <= size)
	{
		while (x + i <= size)
		{
			s = fn_summation(int **map, int x, int y, int i);
			while (s = 0)
			{
				fn_square(x, y, i);
				i++;
			}
			x++;
		}
		x = 0;
		y++;
	}	
}	
