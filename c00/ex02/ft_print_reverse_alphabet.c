/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:02:23 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/10 17:14:29 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;
	int	y;

	x = 122;
	y = 97;
	while (x >= y)
	{
		write(1, &x, 1);
		x --;
	}
}
