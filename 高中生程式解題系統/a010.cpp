#include <stdio.h>
#include <stdlib.h>
long int a[1000000] = {0};
long int b[1000000] = {0};
long int n,m,max;
int main()
{
long int t = 1,p = 0,q = 0;
while(scanf("%ld",&n) != EOF)
{
	m = n;
	for(int i = 2;i <= n;i++)
		{
			while(n % i == 0)
				{
					n = n / i;
					b[i] = i;
					a[i]++;
				}	
		}
		for(int i = 2;i <= m;i++)
			{
				if(b[i] != 0)
					{
						for(int j = 1;j <= a[i];j++)
							t *= b[i];
							p = b[i];
							q = a[i];
					}
			}
		for(int i = 2;i <= m;i++)
		{
			if(b[i] != 0)
				max = i;
		}
	for(int i = 2;i <= m;i++)
		{
			if(t == m)
				{
					printf("%ld^%ld",p,q);
					break;
				}
			else 
			{
				if(i == max)
					{
						printf("%ld",b[i]);
						break;
					}
					if(b[i] != 0)
						{
							if(a[i] > 1)
								printf("%ld^%ld * ",b[i],a[i]);
							else
								printf("%ld * ",b[i]);
					}
			}
		}
		for(int i = 2;i <= m;i++)
			{
				a[i] = 0;
				b[i] = 0;
			}
			t = 1;
}


	return 0;
}
			
