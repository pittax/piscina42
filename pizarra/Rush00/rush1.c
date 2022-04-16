#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"



void conditions(int row, int col, int x, int y) {

	if ((col==0 && row==0) || (col==x-1 && row==y-1))
	{
		putchar('/');
	}

	else if ((col==x-1 && row ==0) || (col==0 && row==y-1))
	{
		putchar('\\');
	}

	else if ((col>0 && col<x-1) && (row>0 && row<y-1))
	{
		putchar(' ');
	}

	else
	{
		putchar('*');
	}
}

void rush(int x, int y) {

	int col = 0;
	int row = 0;

	while (row<=y-1) {

		while (col<=x-1) {

			conditions (row, col, x, y);
			//printf("*");
			col ++;
		}
		putchar('\n');
		col = 0;
		row ++;
	}
}
