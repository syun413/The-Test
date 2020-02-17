#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char a;
	
	while(scanf("%c",&a))
	{
		getchar();
		if(isalpha(a))	
		{
			a = toupper(a);
			printf("%d\n",a - 'A');
		}
	}
	return 0;
}
