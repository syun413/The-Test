#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,x,y,area,per;
scanf("%d %d %d %d",&a,&b,&c,&d);
x = c - a;
y = d - b;
area = x*y;
per =2*(x + y);
printf("%d\n%d",area,per); 
	return 0;	
} 
