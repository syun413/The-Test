#include <stdio.h>
#include <stdlib.h> 
int a[100000] = {};
int n,k;
int h(int p)
{
	int max = 0;
	for(int i = 0;i < n; i++)
	 {
	 	if (a[i] == p)
	 	{
	 		int b = h(i);
	 		if(b > max)
	 			max = b;
		}
	 }
return max + 1;
}
int main()
{
	scanf("%d",&n);
	int l,p;
	for(int i = 0; i < 100000; i++)
		a[i] = -1; 
	for(int i = 0; i < n ;i++)
	{
		scanf("%d",&k);
		for(int j = 0; j < k; j++)
		{
			int c;
			scanf("%d",&c);
			a[c-1] = i;
		}
		if(k == 0)
			l = i;
	}
	while(a[l] != -1)
	{
		l = a[l];
	}
	printf("%d\n",l+1);
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += h(i)-1;

	printf("%d\n",sum);
	return 0;
}
