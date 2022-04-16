/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:44:15 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/16 19:34:34 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		x; //len del input
	int		d;
	int		row;
	char	z[50];
	char	**tab_in;

	x = 0;
	while (argv[1][x])
		x++;
	printf("digitos del input: %d", x);
	printf("\n");

	//calculo de rows
	if (x % 3 != 0)
		i = 1;
	else
		i = 0;
	row







	//input -> array
	/*
	i = 0;
	while (argv[i])
	{
		z[
	}
	*/

	//temporal entrada string
	//x = 5;

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
	d = 0;
	while (i < x)
	{
		j = 0;
		while (j < 3)
		{
			tab_in[i][j] = argv[1][d];
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
