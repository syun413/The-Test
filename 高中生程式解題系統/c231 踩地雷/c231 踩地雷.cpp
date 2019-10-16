#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,x,y;
int count = 0,flag;
int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1};
scanf("%d %d %d",&a,&b,&c);
int maze[a][b] = {0};
while(c--)
{
	count++;
	flag=1;
	scanf("%d %d",&x,&y);
	for(int i = 0;i < 8; i++)
	{
		if(x+dx[i] > 0 && x+dx[i] <= a && y+dy[i] > 0 && y+dy[i] <= b)
		{
			if(maze[x+dx[i]][y+dy[i]] != 0 && flag==1)
			{
				flag=0;
				count--;
			}
			maze[x+dx[i]][y+dy[i]]++;
		}
	}
}
	printf("%d",count);

	return 0;
}
