#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,e,f;
scanf("%d %d %d",&a,&b,&c);
d = 4*a - (b/2) - 2 *c;
e = ((-8*a) + b + 6*c)/2;
f = a - c; 
if(d < 0||e < 0||f < 0|| b % 2 != 0)
	printf("0");
else 	
	printf("%d\n%d\n%d\n",d,e,f);
	return 0;
}
