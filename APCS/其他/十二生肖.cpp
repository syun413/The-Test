#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char z[12][40];
	char temp[40];

	for(int i = 0;i < 12;i++)
		scanf("%s",z[i]);
	for(int i = 10;i >= 0;i--)
	{
		for(int j = 0;j <= i;j++)
		{
			if(strcmp(z[j],z[j+1]) > 0)
			{
				strcpy(temp,z[j]);
				strcpy(z[j],z[j+1]);
				strcpy(z[j+1],temp);
			}
		}
	}
 	for(int i = 0;i < 12;i++)
		printf("%s\n",z[i]);

	return 0;
}
