#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	for(int i = 1; ;)
		{
			if(i % a == b && i % c == d && i % e == f)
				{
					printf("%d\n",i);
					break;
				}
			else
				i++;
		}
	return 0;
 } 
