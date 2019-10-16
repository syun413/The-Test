#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[10];
char b[100][100];
int bound(int x)
{

	if(x>=0)
		return 1;
	else
		return 0;
}

int main()
{
	for(int i = 0; i < 100 ; i++)
	{	
		for(int j =0 ;j < 100;j++)
		{
			b[i][j] = '\0';
		}
	}
	int i = 0;
	while(1)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n' || a[i]==' ')
			break;
		i++;
		if(i>10){
			printf("Target Overflow");
			exit(0);		
		}
	}	 
	int N = i;
	i = 0;
	while(fgets(b[i],100,stdin)!=NULL)
	{
	
		if(strlen(b[i])>20)
		{
			printf("Array Overflow");
			exit(0);
		}
		i++;
	}
	if(i-1 > 20)
	{
		printf("Array Overflow");
		exit(0);
	}
	int dx[8] = {-1,-1,-1, 0,0, 1,1,1};
	int dy[8] = {-1, 0, 1,-1,1,-1,0,1};
	for(int x = 0; x < 20; x++)
	{
		for(int y = 0; y < 20; y++)
		{
			for(int i = 0; i < 8; i++)
			{
				int flag = 0;
				for(int j = 0; j < N; j++)
				{	
					if(!bound(x + j * dx[i]) || !bound(y + j * dy[i]) || b[x + j * dx[i]][y + j * dy[i]] != a[j] || b[x+ j * dx[i]][y + j * dy[i]]=='\0')
					{
						//printf("b:%c a:%c flag:%d i:%d j:%d\n", b[x+dx[i]][y+dy[i]], a[j+1], flag, i, j);
						flag = 1;
						break;
					}
				}
			
				if(flag == 0)
					printf("%d,%d To %d,%d\n",x,y,x+dx[i]*(N-1),y+dy[i]*(N-1));

			}
		}
	}				
	return 0;
}
