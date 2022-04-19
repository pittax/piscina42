/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pittax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:50:09 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/19 20:05:38 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	fn_square(int x, int, y int, i)
{
	//almacenamiento del cuadro mayor
}

int	fn_summation(int **map, int x, int y, int, i)
{
	//sumatoria del mapping
}

void fn_mapping(int **map, int size)
{
	int	x;
	int	y;
	int	i;
	int s;

	while (y + i <= size)
	{
		while (x + i <= size)
		{
			s = fn_summation(**map, x, y, i);
			if (s = 0)
			{
				fn_square(x, y, i);
				i++;
			}
		}
	}
}	
