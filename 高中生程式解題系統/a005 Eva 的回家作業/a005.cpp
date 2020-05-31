#include <stdio.h>
#include <stdlib.h>
int main()
{
int t;
scanf("%d",&t);
int a[5*t];
int b[t+1];
for(int i = 1;i <= 4*t;i++)
	scanf("%d",&a[i]);
for(int i = 1;i <= t;i++)
{
	if((a[4*i-2] / a[4*i-3]) == (a[4*i-1] / a[4*i-2]) && (a[4*i-1] / a[4*i-2]) == (a[4*i] / a[4*i-1]))
		{
			b[i] = a[4*i] * (a[4*i-2] / a[4*i-3]);
			printf("%d %d %d %d %d\n",a[4*i-3],a[4*i-2],a[4*i-1],a[4*i],b[i]);
		}
	else
		{
			b[i] = a[4*i] + (a[4*i-2] - a[4*i-3]);
			printf("%d %d %d %d %d\n",a[4*i-3],a[4*i-2],a[4*i-1],a[4*i],b[i]);
		}
}		

	return 0;
}
