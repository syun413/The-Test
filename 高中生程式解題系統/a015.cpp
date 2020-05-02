#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	int a[105][105];
	int b[105][105];
	while(scanf("%d %d",&i,&j) != EOF)
		{
			for(int m = 0;m < i;m++)
				for(int n = 0;n < j;n++)
					{
						scanf("%d",&a[m][n]);
					}
			for(int m = 0;m < j;m++)
				for(int n = 0;n < i;n++)
					{
						if(n ==  i - 1)
							printf("%d\n",a[m][n]);
						else
							printf("%d ",a[m][n]);
					}
					
			
			
			
			
			
			
			
			
				
		}	



	return 0;
}
