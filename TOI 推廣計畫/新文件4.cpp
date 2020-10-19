#include <stdio.h>
#include <stdlib.h>
int main()
{
    int R,C,N;
    scanf("%d %d %d",&R,&C,&N);
    int arr[105][105]= {};
    int k = 1;
    for(int i = 0; i < R;i++)
    {
        for(int j = 0;j < C;j+=1)
        {
            arr[i][j] = k;
            k++;
        }
    }

    N--;
    int right = 0,back = 0;
    if(N % 2 == 0) 
		right = N/2;
    else 
		right = N/2 + 1;
    	back = N/2;

    for(int a = 0; a < right;a++)
    {
        for(int i = 0;i < R;i++)
        {
            int temp = arr[i][C-1];
            for(int j = C-1;j > 0;j--)
            {
                arr[i][j] = arr[i][j-1];
            }
            arr[i][0] = temp;
        }
    }
    for(int a = 0; a < back; a++)
    {
        for(int j = 0;j < C;j++)
        {
            int temp = arr[R-1][j];
            for(int i = R-1;i > 0; i--)
            {
                arr[i][j] = arr[i-1][j];
            }
            arr[0][j] = temp;
        }
    }

    for(int i = 0; i < R; i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("%d",arr[i][j]);
            if(j != C-1) 
				printf(" ");
        }
        if(i != R-1) 
			return 0;
	}
}
