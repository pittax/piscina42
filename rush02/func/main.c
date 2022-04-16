/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:44:15 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/16 18:18:31 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int		i;
	int		j;
	int		x;
	int		d;
	char	**tab_in;

	//temporal entrada string
	x = 5;

	//malloc de la tabla de entrada
	tab_in = (char**)malloc(x * sizeof(char*));
	i = 0;
	while (i < x)
	{
		tab_in[i] = (char*)malloc(3 * sizeof(char));
		i++;
	}

	//prueba*************
	//inserta valores
	i = 0;
	d = 1;
	while (i < x)
	{
		j = 0;
		while (j < 3)
		{
			tab_in[i][j] = d;
			j++;
			d++;
		}
		i++;
	}

	//prueba*************
	//imprime la tabla
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d", tab_in[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	return (0);
}
