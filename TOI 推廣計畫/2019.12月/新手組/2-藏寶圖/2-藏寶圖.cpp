#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
int arg1[105][105];
int arg2[105][105];
scanf("%d %d",&a,&b);
for(int i = 0;i < a;i++)
	for(int j = 0;j < b;j++)
		scanf("%d",&arg1[i][j]);
for(int i = 0;i < a;i++)
	for(int j = 0;j < b;j++)
		scanf("%d",&arg2[i][j]);
int sum = 0;
for(int i = 0;i < a;i++)
    for(int j = 0;j < b;j++)
    { 
	    {
            sum = 0;
            for(int x = 0;x < a;x++)
                sum += arg2[x][j];
            for(int y = 0;y < b;y++)
                sum += arg2[i][y];
            sum -= arg2[i][j];
            if(sum % 2 != 0)
            {
                if(arg1[i][j]==0) 
					arg1[i][j]=1;
                else if(arg1[i][j]==1) 
					arg1[i][j]=0;
            }
        }
    }

    for(int i = 0;i < a;i++)
	{
		for(int j = 0;j < b;j++)
            printf("%d",arg1[i][j]);
        printf("\n");
	}



	return 0;
}
