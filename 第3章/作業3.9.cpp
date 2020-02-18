#include <stdio.h>
#include <stdlib.h> 
int main()
{
int a,b,c,x,y;
scanf("%d %d %d",&a,&b,&c);
x = 2*(a*b + b*c + a*c);
y = a*b*c;
printf("%d\n%d",x,y);

	return 0;
}
