#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
		{
			if(n % 400 == 0)
				printf("�|�~\n");
			else if(n % 4 == 0 && n % 100 != 0)
				printf("�|�~\n");
			else 
				printf("���~\n");
		}
	return 0;
}
