#include<stdio.h>
#include<stdlib.h>
int f(int x)
{
	if (x ==5||x==10)
		return 1;
	else 
		return f(x-5)+f(x-10);	
}

int main()
{
		int s1;
		scanf("%d",&s1);
		int x = f(s1);
		printf("%d",x);
	return 0;
 } 
