#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x,const void *y)
{
	int a = *(int*)x;
	int b = *(int*)y;
	if(a > b)
		return 1;
	else if(a < b)
		return -1;
	return 0;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int input[n];
		for(int i =0 ;i <n ;i++)
		{
			scanf("%d",&input[i]);	
		}
		qsort(input, n, sizeof(int), cmp);
		int best = -1000;
		int worst = 1000;
		for(int i =0; i < n; i++)
		{
			if(input[i]<60 && input[i]>best)
				best = input[i];
			if(input[i] >= 60 && input[i] < worst)
				worst = input[i];
			printf("%d%c",input[i],(i==n-1)?'\n':' ');
		}
		if(best!=-1000)
			printf("%d\n",best);
		else
			puts("best case");

		if(worst!=1000)
			printf("%d\n",worst);
		else
			puts("worst case");
	}
	return 0;
}
