#include <stdio.h>
#include <stdlib.h>
void f(int* a,int* b)
{
int c;
c = *a;
*a = *b;
*b = c;	
}
int main()
{
int a,b,c;
a = 10;
b = 5;
f(&a,&b);
printf("%d\n%d",a,b);
	return 0;
}
