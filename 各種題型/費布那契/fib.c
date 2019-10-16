#include<stdio.h>
#include<stdlib.h>
int f(int x)
{
	if (x ==1||x==2)
		return 1;
	else 
		return f(x-1)+f(x-2);	
}


int main()
{
		int s1;
		scanf("%d",s1)
		x = f(s1);
		printf("%d",x);
	return 0;
 } 
