#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,x;
scanf("%d %d %d",&a,&b,&c);
x = b*b - 4*a*c;
	if(x == 0)
		printf("1");
	else
		printf("0");

	return 0;
}
