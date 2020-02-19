#include <stdio.h>
#include <stdlib.h> 
int main()
{
int a[3];
int temp;
for(int i = 0;i <= 2;i++)
	scanf("%d",&a[i]);
	for(int i = 2;i >= 0;i--)
	{
		for(int j = 0;j <= i;j++)
			{
				if(a[j] > a[j+1])
					{
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
			}	
	}		
	if(a[0] + a[1] < a[2])
		printf("0");
	else
		printf("1");
	return 0;
}
