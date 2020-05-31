#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5];
	int b[10];
	int c[10];
	int k = 0;
	for(int i = 0;i < 3;i++)
		scanf("%d",&a[i]);
	for(int i = 0;i < 5;i++)
		scanf("%d",&b[i]);
	for(int i = 0;i < 5;i++)
		scanf("%d",&c[i]);
	for(int i = 0;i < 2;i++)
		{
			for(int j = 0;j < 5;j++)
				{
					if(a[i] == b[j])
						{
							k = k + c[j];
						}
				} 
		}
	int flag = 0;
	for(int j = 0;j < 5;j++)
		{
			if(a[2] == b[j])
			{
				k = k - c[j];
				flag = 1;
			}
			
		} 
	if(flag == 0)
		k = k*2;
	if(k < 0)
		k = 0;
	
	printf("%d\n",k);
	
	
	return 0;
} 
