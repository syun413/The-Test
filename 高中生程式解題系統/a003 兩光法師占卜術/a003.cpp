#include <stdlib.h>
#include <stdio.h>

int main()
{
	int M;
	int D;
	int S;
	while(scanf("%d %d",&M,&D) != EOF)
	{
		S = (M * 2 + D) % 3;
		if(S == 0)
			printf("´¶³q");
		else if(S == 1)
			printf("¦N");
		else if(S == 2)
			printf("¤j¦N");
	}
	return 0;
}
