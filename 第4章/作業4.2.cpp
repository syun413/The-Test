#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[10];
int max[2] = {0};
for(int i = 0;i <= 5;i++)
	scanf("%d",&a[i]);
for(int i = 0;i <= 5;i += 2)
	{
		if(a[i]*a[i] + a[i+1]*a[i+1] > max[0]*max[0] + max[1]*max[1])
		{
			max[0] = a[i];
			max[1] = a[i+1];
		}
	}
printf("%d\n%d",max[0],max[1]);	
	
	return 0;
} 
