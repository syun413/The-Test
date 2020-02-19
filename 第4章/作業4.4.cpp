#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,per,x,y;
scanf("%d %d %d %d",&a,&b,&c,&d);
x = a - c;
y = b - d;
if(x < 0)
	x = -x;
if(y < 0)
	y = -y;
per = 2 * (x + y);
printf("%d",per);
	return 0;	
} 
