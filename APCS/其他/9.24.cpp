#include <stdio.h>
#include <stdlib.h>
#define N 256
int eval_f(int *iptr[],int n,int *index)
{
	int max = 0,t;
	for(int i = 0;i < n;i++)
	{
		t =	(*iptr[i] * 4) - (*iptr[i]+1) * 6;
		if(t > max)
		{
			max = t;
			*index = i;
		}
	}
	return max;
}
int main()
{
int n = 0;
int x,y;
int xy[2 * N];
int xy_n = 0;
int max,max_index;
int *iptr[N];
while(scanf("%d%d", &x, &y) != EOF)
{
	iptr[n] = &(xy[xy_n]);
	n++;
	xy[xy_n] = x;
	xy_n++;
	xy[xy_n] = y;
	xy_n++;
}
max = eval_f(iptr, n, &max_index);
printf("%d %d\n", max, max_index);
	return 0;
}
