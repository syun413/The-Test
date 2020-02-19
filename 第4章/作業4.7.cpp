#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
int temp;
int sum = 0;
scanf("%d %d",&a,&b);
if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
for(int i = a;i <= b;i++)
	sum += i;
printf("%d",sum);
	
	return 0;
}
