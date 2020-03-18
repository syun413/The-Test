#include <stdio.h>
#include <stdlib.h>
typedef struct ivjedoigjwiejfig
{
	int x;
	int y;
}Point;
typedef struct q
{
	int front;
	int back;
	int size;
	Point f[505*505];
}queue;
void push(queue *q,Point p)
{
	q->size++;
	q->f[(q->back++)] = p;
}
int empty(queue *q)
{
	if(q->size == 0)
		return 1;
	else 
		return 0;
}
Point pop(queue *q)
{

		q->size--;
		return q->f[(q->front++)];

}
int bound(int x,int y)
{
	return (x >= 0 && y >= 0);
}
int bfs(char a[505][505],int w[505][505],int j,int i)
{
	queue q;
	Point p;
	q.front = 0;
	q.back = 0;
	q.size = 0;
	p.x = j;
	p.y = i;
	push(&q,p);
	int counter;
	while(!empty(&q))
	{
		Point temp = pop(&q);
		int x = temp.x;
		int y = temp.y;
		if(w[x][y] == 0)
		{
			counter++;
			w[x][y] = 1;
			int hor[] = {-1,1,0,0};
			int ver[] = {0,0,-1,1};
			for(int i = 0;i < 4;i++)
				if(bound(x+hor[i],y+ver[i]) && a[x+hor[i]][y+ver[i]] == 'J')
				{
					push(&q,{x+hor[i],y+ver[i]});
				}	
		}
	}
	return counter;
}
int main()
{
int m,n;
scanf("%d %d",&n,&m);
getchar();
char a[505][505];
int w[505][505] = {{0}};
for(int i = 0;i <= m;i++)
	for(int j = 0;j < n;j++)
	{
		scanf("%c",&a[j][i]);

	}
int max = 0;
int sum = 0;
for(int i = 0;i < m;i++)
	for(int j = 0;j < n;j++)
	{
		if(w[j][i] == 1)
			continue;
		if(a[j][i] == 'J')
			{
				 int t;
				 t = bfs(a,w,j,i);
				 if(t >= max)
				 	max = t;
				 sum++;
			}		
	}
	printf("%d %d",sum,max);


	return 0;
}
