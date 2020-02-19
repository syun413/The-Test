#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a[10] = {0};
double b[10] = {0};
int temp;
	for(int i = 0;i <= 5;i++)
		scanf("%d",&a[i]);
	b[0] = sqrt((a[2]-a[0])*(a[2]-a[0]) + (a[3]-a[1])*(a[3]-a[1]));
	b[1] = sqrt((a[4]-a[0])*(a[4]-a[0]) + (a[5]-a[1])*(a[5]-a[1]));
	b[2] = sqrt((a[4]-a[2])*(a[4]-a[2]) + (a[5]-a[2])*(a[5]-a[3]));
	for(int i = 2;i >= 0;i--)
		for(int j = 0;j < i;j++)
			{
				if(b[j] > b[j+1])
					{
						temp = b[j];
						b[j] = b[j+1];
						b[j+1] = temp;
					}
			}
	if(b[0] + b[1] <= b[2])
		printf("0");
	else
		printf("1");0 
	
	return 0;
}
