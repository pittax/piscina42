/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:38:11 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/03 21:38:54 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int r, int c, int x, int y)
{
	if ((c == 0 && r == 0) || (c == x - 1 && r == y - 1 && x != 1 && y != 1))
	{
		ft_putchar('/');
	}
	else if ((c == x - 1 && r == 0) || (c == 0 && r == y - 1))
	{
		ft_putchar('\\');
	}
	else if ((c > 0 && c < x - 1) && (r > 0 && r < y - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	if (x == 0 || y == 0)
		write(1, "Inserte un valor distinto a cero", 32);
	if (x < 0 || y < 0)
		write(1, "Para los valores negativos, se utiliza su modulo\n", 49);
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	c = 0;
	r = 0;
	while (r <= y - 1)
	{
		while (c <= x - 1)
		{
			conditions (r, c, x, y);
			c ++;
		}
		ft_putchar('\n');
		c = 0;
		r ++;
	}
}
