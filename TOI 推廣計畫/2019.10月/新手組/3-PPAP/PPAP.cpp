#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,k = 1,m,a;
scanf("%d",&n);
	for(int i = 4; ;i += 4 * k)
	{
		if(i >= n)
			{
				m = n - (i - 4 * k);
			 	if(m <= k)
					printf("Pen\n");
				else if(m <= 2 * k && m > k)
					printf("Pineapple\n");
				else if(m <= 3 * k && m > 2 * k)
					printf("Apple\n");
				else if(m <= 4 * k && m > 3 * k)
					printf("Pineapple pen\n");
				break;
			}
			k++;
	}
	return 0;
}
