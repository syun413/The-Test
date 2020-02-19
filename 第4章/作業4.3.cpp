#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,x,y,area;
scanf("%d %d %d %d",&a,&b,&c,&d);
x = a - c;
y = b - d;
if(x < 0)
	x = -x;
if(y < 0)
	y = -y;
area = x * y;
printf("%d",area);


	return 0;
}
