#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

void  rush(int x, int y)
{
int i;
int j;
i = 0;
j = 0;

while  (j <= y-1)
{
while(i <= x-1)
{

	if(j==0 && i==0) {ft_putchar('/');}		
	if(j==0 && i>0 && i<x-1) {ft_putchar('*');}
	if(j==0 && i==x-1 && x!=1) {ft_putchar('\\');}

	if((j<y-1 && j>0) && i==0) {ft_putchar('*');}
	if((j<y-1 && j>0) && (i>0 && i<x-1)) {ft_putchar(' ');}
	if((j<y-1 && j>0) && i==x-1 && x!=1) {ft_putchar('*');}

	if(j==y-1 && i==0 && y!=1) {ft_putchar('\\');}
	if(j==y-1 && i>0 && i<x-1 && y!=1) {ft_putchar('*');}
	if(j==y-1 && i==x-1 && y!=1 && x!=1) {ft_putchar('/');}
i++;

}
		i = 0;
		write(1,"\n",1);
		j++;
}



}
