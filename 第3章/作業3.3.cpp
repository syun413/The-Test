#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main()
{
char a[100];
scanf("%s",a);
int x;
x = a[0] - '0'+ a[1] - '0'+ a[2] - '0'+ a[3] - '0';
printf("%d",x);
	return 0;
}
