#include <bits/stdc++.h> 
int main()
{
	int i,n;
	scanf("%d %d",&n,&i);
	int x = n;
	for(int a = 1;a < i;a++)
		n = n * x;
	printf("%d",n);

	return 0;
}
