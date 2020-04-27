#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
		{
			if(n % 400 == 0)
				printf("閏年");
			else if(n % 4 == 0 && n % 100 != 0)
				printf("閏年");
			else 
				printf("平年");
		}
	return 0;
}
