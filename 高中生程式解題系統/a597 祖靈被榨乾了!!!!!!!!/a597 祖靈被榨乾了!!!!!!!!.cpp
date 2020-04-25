#include <stdio.h>
#include <stdlib.h>
typedef struct ivjedoigjwiejfig
{
	int x;
	int y;
}Point;
typedef struct qgjioejiogjeiojgio
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
int bfs(char a[505][505],int w[505][505],int i,int j)
{
	queue q;
	Point p;
	q.front = 0;
	q.back = 0;
	q.size = 0;
	p.x = i;
	p.y = j;
	push(&q,p);
	int counter=0;
	while(!empty(&q))
	{
		Point temp = pop(&q);
		int x = temp.x;
		int y = temp.y;
		if(w[x][y] == 0 )
		{
			counter++;
			w[x][y] = 1;
			int hor[] = {-1,1,0,0};
			int ver[] = {0,0,-1,1};
			for(int i = 0;i < 4;i++)
				if(bound(x+ver[i],y+hor[i]) && a[x+ver[i]][y+hor[i]] == 'J')
				{
                    Point temp = {x+ver[i],y+hor[i]};
					push(&q,temp);
				}	
		}
	}
	return counter;
}
int main()
{
int m,n;
scanf("%d %d",&m,&n);
getchar();
char a[505][505];
int w[505][505] = {{0}};
for(int i = 0;i < m;i++)
	for(int j = 0;j <= n;j++)
	{
		scanf("%c",&a[i][j]);

	}
int max = 0;
int sum = 0;
for(int i = 0;i < m;i++)
	for(int j = 0;j < n;j++)
	{
		if(w[i][j] == 1)
			continue;
		if(a[i][j] == 'J')
			{
				 int t;
				 t = bfs(a,w,i,j);
				 if(t >= max)
				 	max = t;
				 sum++;
                 printf("sum:%d i:%d j:%d\n",sum,i,j);
			}		
	}
	printf("%d %d",sum,max);


	return 0;
}
