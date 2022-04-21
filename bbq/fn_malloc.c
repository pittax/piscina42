/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:11:08 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 17:48:33 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#inclu#d#declare "file_functions.h"

int	main(int argc, char **argv)
{
	int		size;
	int		i;
	char	*g_buff;

	g_buff = "";
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			size = get_size(argv[i]);
			g_buff = create_buff(g_buff, argv[i], size);
			if (fn_map_valid(g_buff) == 0)
				write (1, "map error\n", 10);
			else
			{
				fn_mapping(g_buff);
				free(g-buff);
			}
			i++;
		}
	}
	return (0);
}

int	get_size(char *file)
{
	ssize_t	size_b;
	int		c;
	char	dummy;
	int		fd;

	fd = ft_open(file);
	size_b = 1;
	c = 0;
	while (size_b != 0)
	{
		size_b = ft_read(fd, &dummy, 1);
		c++;
	}
	ft_close(fd);
	return (c);
}

char	*create_buff(char *buff, char *file, int size)
{
	int	fd;

	buff = (char *)malloc (size);
	if (buff = NULL)
	{
		write(1, "Malloc error!", 13);
		exit (0);
	}
	fd = ft_open(file);
	ft_read(fd, buff, size);
	ft_close(fd);
	return (buff);
}

void	get_solution(char *g_buff)
{
	char	obst;
	char	field
	char	square;
	int		i;

	i = 0;
	while (g_buff[i] != '\n')
		i++;
	square = g_buff[i - 1];
	obst = g_buff[i - 2];
	field = g_buff[i - 3]
	fn_convert(&g_buff[i + 1], obst, square, field);
}
