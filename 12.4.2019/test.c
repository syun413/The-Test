#include <stdio.h>
#include <stdlib.h>
int min = 100000;
int	n,p,L,R;
int S[1000000];
void move(int x, int ct)
{
	if(ct > min)
		return;
	if(x == p)
	{
		if(ct < min)
			min = ct;
		return;
	}
	if(x < 0)
		return;
	if(x >= n)
		return;
	move(S[x+R],ct+1);
	move(S[x-L],ct+1);
}
int main()
{
	scanf("%d%d%d%d",&n,&p,&L,&R);
	for(int i = 0; i < n; i++)
		scanf("%d",&S[i]);
	int x = 0;
	int ct = 0;
	move(x, ct);
	printf("%d\n",min);
}
