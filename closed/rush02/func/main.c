/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:44:15 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 00:25:20 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		len; //len del input
	int		d;
	int		row;
	char	z[50];
	char	**tab_in;
	char	**tab_dic;
	int		fd;
	//char	buf[50]; -> probando con z[50]
	ssize_t	nr_bytes; 

	len = 0;
	while (argv[1][len])
		len++;
	printf("digitos del input: %d", len);
	printf("\n");

	//calculo de rows
	if (len % 3 == 0)
		i = 0;
	else
		i = 1;
	row = len / 3 + i;
	printf("numero de rows: %d", row);
	printf("\n");
	printf("valor de i: %d", i);
	printf("\n");
	printf("valor de len: %d", len);
	printf("\n");







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
	tab_in = (char**)malloc(row * sizeof(char*));
	i = 0;
	while (i < row)
	{
		tab_in[i] = (char*)malloc(3 * sizeof(char));
		i++;
	}

	//prueba*************
	//inserta valores
	//i = 0;
	i = row - 1;
	d = 0;
	//while (i < row)
	

	if (len % 3 == 0)
		j = 0;
	else if (len % 3 == 2)
	{
		j = 1;
		tab_in[row-1][0] = 'x';
	}
	else if (len % 3 == 1)
	{	
		j = 2;
		tab_in[row-1][1] = 'x';
		tab_in[row-1][0] = 'x';
	}
	
	
	while (i >= 0)
	{
		while (j < 3)
		{
			tab_in[i][j] = argv[1][d];
			j++;
			d++;
		}
		//i++;
		j = 0;
		i--;
	}

	//prueba*************
	//imprime la tabla
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < 3)
		{
			write(1, &tab_in[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}


	//write(1, "x", 1);

/*
	//crea la tabla diccionario
	write(1, "***crea la tabla diccionar\n", 27);
	tab_dic = (char**)malloc(row * sizeof(char*));
	i = 0;
	while (i < 40)
	{
		tab_dic[i] = (char*)malloc(2 * sizeof(char));
		i++;
	}

	//lee el diccionario
	write(1, "lee el diccionario", 17);
	fd = open("library", O_RDONLY);

	if (fd == -1)
		printf("error al abrir el dicc\n");
	else
	{
		printf("prrrrr");
		nr_bytes = read(fd, z, 49);
		close(fd);
		if (nr_bytes == 0)
			printf("archivo vacio\n");
		printf("prueba 1");
		//else
		//	printf("num caracteres: %d, contenido: \n%s \n", (int)nr_bytes, z);
	}
*/	
	//printf("inserta valores diccionario");
   	//inserta valores a la tabla diccionario
/*
	i = 0;
	d = 0;
	write(1,"a1",2);
	while (z[i])
	{
		while (z[i] != ':')
		{
			tab_dic[0][i] = z[i];
			write(1, "caca", 4);
			//printf("prueb %c", tab_dic[0][i]);
			i++;
		}
	}
	

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
*/



	//pruebas**************
	//printf("pruebas de acceso a 'z'"); 
	//printf("\n");

	//printf("caracter %c", z[7]);
	
	i = 0;
	/*
	while (z[i])
	{
		while (z[i] != '\n')
		{

		}
	}
	*/





	return  (0);
}
