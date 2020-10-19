#include<stdio.h>

int main()
{	
	int n = 0;
	int h = 0;
	int w = 0;
	scanf("%d", &n);

	int n1 = 0;
	int n2 = 1;
	int n3 = 0;
	for(int i = 2;i <= n; i++)
	{
		n3 = n1 + n2;
		if(i == n)
			break;
		n1 = n2;
		n2 = n3;
	}

	if(n == 1)
	{
		h = 1;
		w = 1;
	}
	else
	{
		h = n3;
		w = n3 + n2;
	} 
		
	printf("%d:%d\n",h,w);
	return 0;
}
