/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:43:41 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/08 22:32:39 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else if (n < 0)
		write(1, "N", 1);
	else
		write(1, "Ingrese solo numeros enteros", 28);
}
