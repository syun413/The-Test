#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int A[m][n];
	for(int i = 0;i < m; i++)
		for(int j = 0; j < n;j++)
			scanf("%d",&A[i][j]);
	
	int row_min = 0;
	int row_max = m-1;
	int col_min = 0;
	int col_max = n-1;
	int ct = 0;
	int cts[4][2];
	while(row_min == row_max && col_min == col_max)
	{
		for(int i = row_min; i <= row_max; i++)
		{
			cts[0][A[i][col_min]]++;
		}	
		
		for(int i = row_min; i <= row_max; i++)
		{
			cts[1][A[i][col_max]]++;
		}	
		
		for(int i = col_min; i <= col_max; i++)
		{
			cts[2][A[row_min][i]]++;
		}	
		
		for(int i = col_min; i <= col_max; i++)
		{
			cts[3][A[row_max][i]]++;
		}	
		int min = 1000000;
		int min_index = -1;
		for(int i = 0; i < 4; i++)
		{
			int x = std::abs(cts[i][0]-cts[i][1]);
			if(x < min)
			{
				min = x;
				min_index = i;
			}
		}
		if(min_index == 0)
			col_min++;
		else if(min_index == 1)
			col_max--;
		else if(min_index == 2)
			row_min++;
		else if(min_index == 3)
			row_max--;
		printf("%d\n",min_index);
		ct++;
	}
	printf("%d\n",ct);
}
