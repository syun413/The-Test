#include <stdio.h>
#include <stdlib.h>
int main()
{
int s,c,sum;
scanf("%d %d",&s,&c);
int a[s][c];
for(int i = 0;i < s;i++)
	for(int j = 0;j < c;j++)
		scanf("%d",&a[i][j]);
for(int i = 0;i < s;i++)
	for(int j = 0;j < c;j++)
		{
			sum += a[i][j];
			if(j == c-1)
			{
				sum = sum/c;
				printf("%d\n",sum);
				sum = 0;
			}
		}
sum = 0;	
for(int j = 0;j < c;j++)
	for(int i = 0;i < s;i++)
		{
			sum += a[i][j];
			if(i == s-1)
			{
				sum = sum/s;
				printf("%d\n",sum);
				sum = 0;
			}
		}
				
				
		
	return 0;
}
