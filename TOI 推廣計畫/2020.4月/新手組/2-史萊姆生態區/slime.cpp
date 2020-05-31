#include <stdio.h>
#include <stdlib.h>
int main()
{
int N,T;
int k;
int sum;
int a = 0;
scanf("%d %d",&N,&T);
k = T / N;
N = 1;
sum = k + N;
while(sum != 1)
	{
		sum /= 2;
		a++;
	}
printf("%d",a);

	return 0;
 } 
