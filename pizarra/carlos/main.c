#include <stdio.h>

char *ft_rev_print(char *str);

int main(void)
{
	char *str;
	char *rev_str;

	str = "rainbow dash";
	rev_str = ft_rev_print(str);
	printf("%s\n", rev_str);
}
