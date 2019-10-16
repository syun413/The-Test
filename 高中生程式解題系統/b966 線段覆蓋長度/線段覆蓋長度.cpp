#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
 int line[10000][2]={{0}};

    while(scanf(" %d",&n)!=EOF){

    for(int i=0 ; i<n ; i++)
    {
        scanf(" %d %d",&line[i][0],&line[i][1]);

        for(int j=0; j<i ; j++)
        {
            if(line[i][0]<line[j][0])
            {
            int tmp[2]={line[i][0],line[i][1]};
            for(int k=i; k>j ; --k)
            {
                line[k][0] = line[k-1][0];
                line[k][1] = line[k-1][1];
            }
            line[j][0]=tmp[0];
            line[j][1]=tmp[1];
            break;
            }
        }
    }

    int start=line[0][0], end=line[0][1];
    int length=0;
    for(int i=1; i<n ; i++)
    {
        if(line[i][0]<=end)
        {
            if(line[i][1]>end)
                end = line[i][1];
        }
     else{
        length += (end-start);
        start=line[i][0];
        end=line[i][1];
        }
    }

    length += (end-start);
    printf("%d\n",length);
    }
	return 0; 
} 
