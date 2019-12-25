#include <stdio.h>
#include <stdlib.h>
void f(int n,char A,char B,char C)
{
	if(n==0)
		return ;
	f(n-1,A,C,B);
	printf("%c to %c\n",A,C);
	f(n-1,B,A,C);
}
int main()
{
	int n;
	char A,B,C;
	scanf("%d",&n);
	scanf("%c%c%c",&A,&B,&C);
	f(n,A,B,C);
	return 0;
}
