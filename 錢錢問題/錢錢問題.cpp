#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[10000] = {0};
int x;
for(int i = 1;i < 5;i++)
	a[i] = 1;
for(int i = 5;i < 10;i++)
	a[i] = 	i-3;
	a[10] = 9;
scanf("%d",&x);
for(int i = 11;i <= x;i++)
	a[i] = a[i-1]+a[i-5]+a[i-10]; 
printf("%d\n",a[x]);



	return 0;
}
