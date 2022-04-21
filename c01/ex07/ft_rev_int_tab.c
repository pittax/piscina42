/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:49:58 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/13 23:22:14 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	t;

	i = 0;
	x = size / 2;
	size--;
	while (i < x)
	{
		t = tab[size];
		tab[size] = tab[i];
		tab[i] = t;
		i++;
		size--;
	}
}
