#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[2][3],b[3][4],c[2][4];
for(int i = 0;i < 2;i++)
	for(int j = 0;j < 4;j++)
		c[i][j] = 0;
for(int i = 0;i < 2;i++)
	for(int j = 0;j < 3;j++)
		scanf("%d",&a[i][j]);
for(int i = 0;i < 3;i++)
	for(int j = 0;j < 4;j++)
		scanf("%d",&b[i][j]);
for(int i = 0;i < 2;i++)
	for(int j = 0;j < 4;j++)
		for(int k = 0;k < 3;k++)
			c[i][j] += a[i][k]*b[k][j];
for(int i = 0;i < 2;i++)
	for(int j = 0;j < 4;j++)
		printf("%d\n",c[i][j]);
	return 0;
}
