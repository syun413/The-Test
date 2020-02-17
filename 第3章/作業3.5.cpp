#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
scanf("%d",&x);
a = x / 50;
b = (x % 50) / 10;
c = (x % 50 % 10) / 5;
d = x % 50 % 10 % 5;
printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;	
} 
