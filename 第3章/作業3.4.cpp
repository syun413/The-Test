#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
scanf("%d",&x);
	if(x % 3 == 0 && x % 5 == 0)
		printf("0");
	else if(x % 3 == 0)
		printf("1");
	else if(x % 5 == 0)
		printf("1");
	else
		printf("0");
	return 0;	
} 
