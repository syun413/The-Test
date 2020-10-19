#include <stdio.h> 
#include <stdlib.h>
int main()
{
int m;
scanf("%d",&m);
int a[m];
	for(int i = 0;i < m;i++)
		{
			scanf("%d",&a[i]);
		}
	for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < m-i-1;j++)
				{
					if(a[j] > a[j+1])
						{
							int temp = a[j];
							a[j] = a[j+1];
							a[j+1] = temp;
						}
				}
		}
	for(int i = 0;i < m-1;i++)
		{
			printf("%d ",a[i]);
		}
	printf("%d\n",a[m-1]);
	if(a[0] > 60)
		{
			printf("best case\n");	
		} 	
	for(int i = m-1;i > 0;i--)
		{
			if(a[i] < 60)
				{
					printf("%d\n",a[i]);
					break;
				}
		}
	if(a[m-1] < 60)
		{
			printf("worst case\n");
			return 0;
		}
	for(int i = 0;i < m;i++)
		{
			if(a[i] > 60)
				{
					printf("%d\n",a[i]);
					break;
				}
		}
	return 0;
}
