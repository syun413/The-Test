#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int f;
	scanf("%d",&i);
	int a[i]={0};
	int sum = 0;
	for(int j = 0;j < i;j++)
		scanf("%d",&a[j]);
	for(int k = 0;k < i;k++)
		{
			printf("a[%d]:%d]\n",k,a[k]);
			if(a[k] == -1)
		 		continue;
			f = a[k];
			printf("f:%d\n",f);
			a[k] = -1;
			while(a[f] != -1)
			{
				printf("%d\n",a[f]);
				printf("%d\n",f);
				int temp = f;
				f = a[temp];
				a[temp] = -1;
			}
			sum += 1;
		}
	printf("%d",sum);
	return 0;
}
