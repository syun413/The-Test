#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char arr[100000];
int main()
{
	int n;
	scanf("%d",&n);
	scanf("%s",arr);
	int max = 0;
	int toggle = 0;
	for(int i = 0; i < strlen(arr) - n + 1; i++)
	{
		int failed = 0;
		for(int times = 0;;times++)
		{
			for(int j = 0 ;j < n; j++)
			{
				if(i + times * n +  j >= strlen(arr))
				{
					failed = 1;
					break;
				}

				if(j==0 && times==0)
				{
					toggle = (isupper(arr[i + times * n + j]) > 0);
					continue;
				}	
				if((isupper(arr[i + times * n + j]) > 0) != toggle)
				{
					failed = 1;
					break;
				}
				
			}
			toggle = !toggle;
			if(failed)
				break;
			if((times+1)>max)
				max = times+1;
				
		}

	}
	printf("%d\n",n*max);
	return 0;
}
