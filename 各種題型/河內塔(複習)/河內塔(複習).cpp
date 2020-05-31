#include <stdio.h>
#include <stdlib.h>
void f(char a,char b,char c,int n)
{
	if(n == 1)
		{
			printf("\nMove disk %d from %c to %c\n",n,a,c);
			return;
		}
	f(a,c,b,n-1);
		printf("\nMove disk %d from %c to %c\n",n,a,c);
	f(b,a,c,n-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	f('A','B','C',n);
	return 0;
}
