#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,e,x;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
x = 2*(a*b + b*c + a*c) + (a - 2*e)*d*8 + (b - 2*e)*d*8 + (c - 2*e)*d*8;
printf("%d",x);
	return 0;	
} 
