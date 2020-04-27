#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c,t,x1,x2;
scanf("%d %d %d",&a,&b,&c);
t = b*b - 4*a*c;
if(t > 0)
	{
		x1 = (-b + sqrt(t))/(2*a);
		x2 = (-b - sqrt(t))/(2*a);
		printf("Two different roots x1=%d , x2=%d",x1,x2);
	}
else if(t == 0)
	{
		x1 = -b/(2*a);
		printf("Two same roots x=%d",x1);
	}
else if(t < 0)
	{
		printf("No real root");
	}

	return 0;
}
