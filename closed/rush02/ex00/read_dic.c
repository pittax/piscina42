#include <stdio.h> //FIXME

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int	ft_dic_line(char *line);

int	count_size(char *filepath)
{
	int	i;
	int j;
	ssize_t	nr_bytes;
	char	buf[1];

	i = 0;
	j = open(filepath, O_RDONLY);
	if (j > 0)
	{
		nr_bytes = 1;
		while (nr_bytes != 0)
		{
			i++;
			nr_bytes = read(j, buf, 1);
		}
		close(j);
	}
	else
	{
		printf("fiLE COULD NOT BE OPENED");
	}
	return (i);
}

char	*readfile(char *filepath)
{
	int 		i;
	char		*buf;
	ssize_t		nr_bytes;
	
	i = open(filepath, O_RDONLY);
	buf = (char *) malloc (sizeof(char) * count_size(filepath));
	if (buf == NULL)
	{
		printf("No se ha podido alojar la memoria");
	}
	else
	{
		if (i > 0)
		{
			nr_bytes = read(i, buf, count_size(filepath));
		}
		else
		{
			printf("File could not be opened");
		}
		close(i);
	}
	read(i, buf, count_size(filepath));
	close(i);
	return (buf);
}

int	blank(char *str)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	line = (char *)malloc(sizeof(char) * 3);
	while (str[i] != '\0')
	{
	   if (str[i] == '\n')
	   {
		  if (j > 0)
			{
				ft_dic_line(line);
			}
			line = (char *)malloc(sizeof(char) * 3);
			j = 0;
			i++;
		}
		if (str[i] >= 32 && str[i] <= 126)
		{
			line[j] = str[i];
			i++;
			j++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
