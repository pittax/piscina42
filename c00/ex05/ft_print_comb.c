/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:31:05 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/07 12:29:50 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != 55)
					write(1, ", ", 2);
				z ++;
			}
			y ++;
		}
		x ++;
	}
}
