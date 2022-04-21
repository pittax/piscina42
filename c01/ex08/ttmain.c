#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int	size;
	int tab[5] = {2,3,1,1,1};
	size = 5;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
