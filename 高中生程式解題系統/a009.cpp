#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char a[1000];
while(scanf("%s",&a) != EOF)
	{
		for(int i = 0; i < strlen(a); i++)
			{
				a[i] -= 7;
				printf("%c",a[i]);
			}
			puts("");
	}
	return 0;
}
