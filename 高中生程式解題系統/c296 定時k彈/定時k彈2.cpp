#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, K;
	int r[200000]={0};
	scanf("%d %d %d",&N, &M, &K);
	if(N==(K+1))
	{
		int m = 0;
		for(int n=1; n<=N; n++)
		{
			m=(m+M)%n;
		}	
		printf("%d\n",m+1);
	}
	
	else
	{
		for(int i=0; i<N ; i++)
	{
		r[i]=i+1;
	}
	int now=0;
	for(int i=0;i<K;i++)
	{
	now=(now+M-1)%N;
		for(int j=now; j<N-1; j++)
			{
				r[j]=r[j+1];
			}
	N-=1;
	}
		printf("%d\n",r[now%N]);
	}

	return 0;
}
