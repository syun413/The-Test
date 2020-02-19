#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[5] = {0};
int temp;
int x,y;
	for(int i = 0;i <= 2;i++)
		scanf("%d",&a[i]);
	for(int i = 2; i >= 0;i--)
		for(int j = 0;j < i;j++)
		{
			if(a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
		}
	x = a[0]*a[0]+a[1]*a[1];
	y = a[2]*a[2];
	if(x < y)
		printf("1");
	else if(x > y)
		printf("2");
	else if(x = y)
		printf("3");
	return 0;
}
