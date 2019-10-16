#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c;
int d = 0;
	scanf("%d %d %d",&a, &b, &c);
	if(a>0)
		a=1;
	if(b>0)
		b=1;
	if((a&b) == c)
	{
		d = 1;
		puts("AND");
	}
	
	if((a|b) == c)
	{
		d = 1;
		puts("OR");
	}

	if((a^b) == c)
	{
		d = 1;
		puts("XOR");
	}

	if(d == 0)
		puts("IMPOSSIBLE");
	return 0;
} 
