/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:37:29 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/14 10:58:30 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;
	int	y;

	y = 0;
	while (y < size - 1)
	{
		i = 0;
		j = 1;
		while (i < size - 1)
		{
			if (!(tab[i] <= tab[j]))
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
			i++;
		}
		y++;
	}
}
