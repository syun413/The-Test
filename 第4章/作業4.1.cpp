#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[5];
int min;
scanf("%d %d %d",&a[0],&a[1],&a[2]);
min = a[0];
for(int i = 1; i <= 2;i++)
	{
		if(a[i] < min)
			min = a[i];
	}
printf("%d",min);	

	return 0;	
} 
