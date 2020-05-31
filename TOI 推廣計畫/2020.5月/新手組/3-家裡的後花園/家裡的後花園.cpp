#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[30];
	int n;
	int max = -2,min = -1;
	int o = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%d",&a[i]);  	
	for(int j = 0;j < n;j++)
		{
			if(a[j] == 1)
				{
					min = j;
					break;
				}
		}
	for(int j = 0;j < n;j++)
		{
			if(a[j] == 1)
				{
					max = j;
				}
		}
	for(int j = min;j <= max;j++)
		{
			if(a[j] == 0)
				{
					o++;
				}
		}
	for(int j = min;j <= max;j++)
		{
			if(a[j] == 9)
				{
					if(a[j-1] == 0)
						{
							o--;
							a[j-1] = 2;
						}
					if(a[j+1] == 0)
						{
							o--;
							a[j+1] = 2;
						}
				}
		}
	
		

	printf("%d",o);
	return 0;
} 
