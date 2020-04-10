#include <stdio.h>
#include <stdlib.h>
typedef struct ivjedoigjwiejfig
{
	int x;
	int y;
}Point;
int bound(int x,int y)
{
	return (x >= 1 && y >= 1&& x <= 10 && y <= 10);
}
int DFS2(int a[10][10],Point p2)
{
	int hor[] = {-1,1,0,0};
	int ver[] = {0,0,-1,1};
	for(int i = 0;i < 4;i++)
		{
			
			Point p3;
			p3.x = p2.x+ver[i];
			p3.y = p2.y+hor[i];
			if(bound(p3.x,p3.y) && a[p3.x][p3.y] == 1)
			{
				int ret = DFS2(a,p3);
				return ret;
			}
			else if(bound(p3.x,p3.y) && a[p3.x][p3.y] == 0)
			{
				return 1;
			}
		}
	return 0;
}
int DFS1(int a[10][10],int i,int j)
{
	Point p;
	p.x = i;
	p.y = j;
	a[i][j] = 2;
	int hor[] = {-1,1,0,0};
	int ver[] = {0,0,-1,1};
	for(int i = 0;i < 4;i++)
	{
		Point p2;
		p2.x = p.x+ver[i];
		p2.y = p.y+hor[i];
		if(bound(p.x+ver[i],p.y+hor[i]) && a[p.x+ver[i]][p.y+hor[i]] == 0)
		{
			a[i][j] = 0;
			return 0;
		}
		else if(bound(p.x+ver[i],p.y+hor[i]) && a[p.x+ver[i]][p.y+hor[i]] == 1 && DFS2(a,p2) == 0)
		{
			a[i][j] = 0;
			return 0;
		}	
	}
	a[i][j] = 0;
	return 5;
}

int main()
{
int a[10][10] = {{0}};
int go[10][10] = {{0}};
for(int i = 1;i <= 9;i++)
	for(int j = 1;j <= 9;j++)
	{
		scanf("%d",&a[i][j]);
	}
for(int i = 1;i <= 9;i++)
	for(int j = 1;j <= 9;j++)
	{
		if(a[i][j] == 1 || a[i][j] == 2)
			go[i][j] = 5;
		if(a[i][j] == 0)
			{
				go[i][j] = DFS1(a,i,j);
			}		
	}
for(int i = 1 ; i <= 9 ; i++)
{
	for(int j = 1; j <= 9; j++)
	{
		printf("%d ",go[i][j]); 
	}
	puts("");
}
		
	return 0;
}
