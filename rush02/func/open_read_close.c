/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_close.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:24:07 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/16 17:42:32 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char buf[12];
	ssize_t nr_bytes;

	fd = open("library", O_RDONLY);

	if (fd == -1)
		printf("error al abrir\n");
	else
	{
		nr_bytes = read(fd, buf, 10);
		close(fd);

		if (nr_bytes == 0)
		{
			printf("archivo vacio\n");
		}
		else
		{
			printf("num caracteres: %d, contenido: %s \n", (int)nr_bytes, buf);
		}
	}

	return (0);
}
