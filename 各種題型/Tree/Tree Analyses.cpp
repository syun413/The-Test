#include <stdio.h>
#include <stdlib.h>
int parent[100001];
int n;
int h(int x)
{
	int max = 0;
	for(int i = 1;i <= n;i++)
	{
		if(parent[i] = x && max < h(i))
			max = h(i);
	}
	return max + 1;
}
int main()
{
	int sum,k,root;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
		parent[i] = 0;
	for(int i = 1;i <= n;i++)
	{
		scanf("%d",&k); 
		for(int j = 0;j < k;j++)
		{
			int c;
			scanf("%d",&c);
			parent[c] = k;
		}
	}	
	for(int i = 1;i <= n;i++)
	{
		if(parent[i] == 0)
		{
			{
				root = i;
				break;
			}
		}
	}
	for(int i = 1;i <= n;i++)
		sum += h(i);
	printf("%d\n%d",root,sum);			
		

		
	return 0;
}
