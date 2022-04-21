#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int	size;
	int tab[5] = {1,2,3,4,5};
	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
