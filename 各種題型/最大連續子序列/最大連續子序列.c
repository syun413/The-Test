#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[10000];
	for (int i =0 ;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int upperbound = N/2 + 1; upperbound >= 1; upperbound--)
	{
		//int *array = (int*)malloc(upperbound * sizeof(int));
		//find the candidate of upperbound nm

		//int candidate[N][upperbound];
		int candidate[1000][1000];
		int candidate_ct = 1;
		int ct[1000] = {0};
		//find the first candidate
		for(int k = 0; k < upperbound; k++)
		{
			candidate[0][k] = a[k];
		}

		candidate_ct++;
		for(int start = 1;start < N;start++)
		{
			//find the candidate in the sequence
			for(int k = 0; k < upperbound; k++)
			{
				for(int z = 0; z < candidate_ct - 1; z++)
				{
					if(a[start + k] == candidate[z][k])
					{
						ct[z]++;
						if(ct[z] == upperbound)
						{
							printf("%d",upperbound);
							return;
						}
					}
				}
				candidate[candidate_ct][k] = a[start + k];
			}
		}
	}
}
