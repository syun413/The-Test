#include <stdio.h>
#include <stdlib.h> 
int i;
int main()
{
int n,temp;
while(scanf("%d",&n) != EOF)
{
int a[n];
for(i = 0; i < n;i++)
	scanf("%d",&a[i]);
for(i = 0; i < n; i++) 
	{
    for(int j = i; j < n; j++) 
		{
        if( a[j] < a[i] ) 
			{
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        
    }

    for(i = 0; i < n; i++) 
	{
        printf("%d", a[i]);
        if(i < n-1)
        	printf(" ");
    }
    printf("\n");
    
    
    
    
    if(a[i-1] < 60)
    {
		printf("%d\n",a[i-1]);
		printf("worst case\n");
 	}
	if(a[0] >= 60)
	{
		printf("best case\n");
		printf("%d\n",a[0]);
	}
	if(a[0] < 60 && a[i-1] >= 60)
	{
		for(i = 0; a[i] < 60;i++);
		if(a[i] >= 60)
    		{
				printf("%d\n",a[i-1]);
    			printf("%d\n",a[i]);
    		}
	}	
}
	return 0;
}
