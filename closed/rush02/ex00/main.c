/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalgara- <dalgara-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:31:17 by dalgara-          #+#    #+#             */
/*   Updated: 2022/04/16 19:57:31 by dalgara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//char **g_dic;
int		count_size(char *filepath);
char	*readfile(char *filepath);
int		blank(char *str);

void	ft_putstring(char *txt)
{
	while (*txt)
	{
		write(1, &(*txt), 1);
		txt++;
	}
}

int	ft_get_number(char *nbr, char *number)
{
	int		i;

	i = 0;
	while (*nbr && *nbr >= '0' && *nbr <= '9')
	{
		number[i] = *nbr;
		nbr++;
		i++;
	}
	number[i] = '\0';
	if (*nbr != '\0')
		return (0);
	else
		return (1);
}

int	ft_dic_line(char *line)
{
	int		i;
	char	*number;
	char	*text;

	i = 0;
	number = (char *)malloc(sizeof(char) * 3);
	while (*line && *line == ' ')
		line++;
	if (*line == '-')
		return (0);
	else if (*line == '+')
		line++;
	while (*line && *line == '0' && *(line + 1) >= '0' && *(line + 1) <= '9')
		line++;
	while (*line && *line >= '0' && *line <= '9')
	{
		number[i] = *line;
		line++;
		i++;
	}
	number[i] = '\0';
	while (*line && *line == ' ')
		line++;
	if (*line != ':')
		return (0);
	else
		line++;
	i = 0;
	text = (char *)malloc(sizeof(char) * 3);
	while (*line && *line == ' ')
		line++;
	while (*line && *line >= 32 && *line <= 126)
	{
		text[i] = *line;
		line++;
		i++;
	}
	text[i] = '\0';
	ft_putstring("\n");
	ft_putstring(number);
	ft_putstring(" ");
	ft_putstring(text);
	if (*line != '\0')
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	//int		line;
	char	*number;
	char	*dic_num;
	char	*dic_txt;

	number = (char *)malloc(sizeof(char) * 3); //FIXME SIZE!?
	dic_num = (char *)malloc(sizeof(char) * 3); //FIXME SIZE!?
	dic_txt = (char *)malloc(sizeof(char) * 3); //FIXME SIZE!?
	if (argc == 2)
	{
		if (ft_get_number(argv[1], number))
			ft_putstring(number);
		else
			ft_putstring("Error\n");
	}
	else if (argc == 3)
	{
		if (ft_get_number(argv[2], number))
			ft_putstring(number);
		else
			ft_putstring("Error\n");
		if (blank(readfile(argv[1])))
			ft_putstring("OK");
		//line = ft_dic_line(argv[1], dic_num, dic_txt);
		/*if (line)
		{
			ft_putstring(" ");
			ft_putstring(dic_num);
			ft_putstring(" ");
			ft_putstring(dic_txt);
			ft_putstring("\n");
		}
		else
			ft_putstring("Dict Error\n");
		*/
	}
	else
	{
		ft_putstring("Error: Wrong input\n");
	}
	return (0);
}
