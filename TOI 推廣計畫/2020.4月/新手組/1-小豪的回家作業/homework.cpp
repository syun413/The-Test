#include <stdio.h>
#include <stdlib.h>
int main()
{
long long int a,b,c,temp;
scanf("%lld %lld",&a,&b);
if(a == b)
	{
		b -= 3;
		c = a - b;
		if(c < b)
		{
			temp = b;
			b = c;
			c = temp;
		}
			printf("%lld+%lld=%lld\n",b,c,a);
	}
else 
	{
		c = a - b;
		if(c < b)
		{
			temp = b;
			b = c;
			c = temp;
		}
		printf("%lld+%lld=%lld\n",b,c,a);	
	}

	return 0;
 } 
