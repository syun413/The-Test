#include <stdio.h>
#include <stdlib.h>
void f(int x,int *a,int b)
{
	if(x==0||x==b)
		*a=-*a;
}

main()
{
int x,y,x1,y1,x2,y2,dx1,dy1,dx2,dy2,t;
scanf("%d %d %d %d %d %d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2,&dx1,&dy1,&dx2,&dy2,&t);


	for(int i=0;i<t;i++)
	{
		if(x1==x2 && y1==y2)
		{
			int temp;
			temp=dx1;
			dx1=dx2;
			dx2=temp;
			
			temp=dy1;
			dy1=dy2;
			dy2=temp;
		}
		f(x1,&dx1,x);
		f(y1,&dy1,y);
		f(x2,&dx2,x);
		f(y2,&dy2,y);
	x1+=dx1;
	y1+=dy1;
	x2+=dx2;
	y2+=dy2;
	}
printf("%d\n%d\n%d\n%d\n",x1,y1,x2,y2);
} 
