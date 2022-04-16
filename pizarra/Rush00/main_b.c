#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

int main()
{
int x;
char a;
char b;
a = '*';


for (x = 0; x <= 2; x++ )
{
		for (int y = 0; y <= 2; y++)
{

if(x==0 && y==0){ft_putchar('/');}		
if(x==0 && y>0){ft_putchar('*');}
if(x==0 && y==2){ft_putchar('\\');}

if(x==1 && y==0){ft_putchar('*');}
if(x==1 && y>0){ft_putchar(' ');}
if(x==1 && y==2){ft_putchar('*');}

if(x==2 && y==0){ft_putchar('\\');}
if(x==2 && y>0){ft_putchar('*');}
if(x==2 && y==2){ft_putchar('/');}

}
		write(1,"\n",1);
}



}
