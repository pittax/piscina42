/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:52:59 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 01:10:23 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//explore.c
void	fn_square(int x, int y, int i);
int		fn_summation(int **map, int x, int y, int i);
void	fn_mapping(char *g_buff );

//fn_malloc.c
int		main(int argc, char **argv);
int		get_size(char *file);
char	*create_buff(char *buff, char *file, int size);

//map_valid.c
//	fn_map_valid();

//convert.c
int	fn_convert();
