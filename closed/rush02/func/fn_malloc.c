/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:41:24 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/16 17:57:26 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int j;
	int x;
	int	*a;
	int *arr;
	int **tabla;
	
	//reserva 1 entero
	a = (int *)malloc(sizeof(int));
	*a = 10;
	printf("%d \n", *a);

	//reserva 3 enteros
	arr = (int *)malloc(3 * sizeof(int));
	*(arr + 0) = 100;
	*(arr + 1) = 200;
	arr[2] = 300;
	printf("%d \n", arr[0]);
	printf("%d \n", arr[1]);
	printf("%d \n", arr[2]);

	//reserva una tabla
	tabla = (int **)malloc(3 * sizeof(int *));
	i = 0;
	while (i <  3)
	{
		tabla[i] = (int *)malloc(3 * sizeof(int));
		i++;
	}
	i = 0;
	x = 1;
	//inserta valores en una tabla
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			tabla[i][j] = x;
			j++;
			x++;
		}
		i++;
	}
	i = 0;
	//imprime la tabla
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d", tabla[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	return (0);
}
