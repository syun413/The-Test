#include <stdlib.h>
#include <stdio.h> 
int f(int x)
{
 x = x/10+1;
}


int main()
{
	int floor;
	scanf("%d", &floor);
	int x = f(floor);
	printf("%d",x);
	return 0;
}
