#include <stdio.h>
#include <unistd.h>
#include "t_putchar.c"


int x = '4';
int y = '6';

void conditions(int row, int col, int x, int g) {

	if ((col==0 && row==0) || (col==x-1 && row=y-1))
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

void rush() {

	col == '0';
	row == '0';

	while (row<=y-1) {

		while (col<=x-1) {

			conditions (int row, int col, int x, int y);
			col ++;
		}
		putchar('\n');
		col == 0;
		row ++;
	}
}
