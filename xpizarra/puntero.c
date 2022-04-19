//************ Punteros
#include <stdio.h>

int	main(void)
{
	int	*p1;
	int	*p2;
	int	a[10];
	int	b;
	int	x;

	a[0] = 5;
	a[1] = 10;
	b = 10;
	p1 = &a[10];
	p2 = &b;
	printf("direccion / contenido -->  %p", &a[0]);
	printf(" / ");
	printf("%d", a[0]);
	printf("\n");
	printf("direccion / contenido -->  %p", &b);
	printf(" / ");
	printf("%d", b);
	printf("\n");
	printf("*** PUNTERO ***\n");
	x = *p1;
	printf("contenido apuntado --> %d", *p1[0]);
	printf("\n");
	printf("siguiente espacio --> %d", *(p1[0] + 1));
	printf("   x --> %d", x);
	printf("\n");
}

