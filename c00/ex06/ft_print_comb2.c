/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cmb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:32:51 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/07 12:27:02 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			z = ((x - x % 10) / 10) + 48;
			write (1, &z, 1);
			z = (x % 10) + 48;
			write (1, &z, 1);
			write (1, " ", 1);
			z = ((y - y % 10) / 10) + 48;
			write (1, &z, 1);
			z = (y % 10) + 48;
			write (1, &z, 1);
			if (x != 98)
				write (1, ", ", 2);
			y ++;
		}
		x ++;
	}
}
