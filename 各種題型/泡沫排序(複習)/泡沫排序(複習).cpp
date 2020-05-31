#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[6];
	for(int i = 0;i < 5;i++)
		scanf("%d",&a[i]);
	for(int i = 0;i < 5;i++)
		for(int j = 0;j < 5-i-1;j++)
			{
				if(a[j] > a[j+1])
					{
						int temp;
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
			}
	for(int i = 0;i < 5;i++)
		printf("%d ",a[i]);
		return 0;
}

