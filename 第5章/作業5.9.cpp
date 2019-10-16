#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
			b=0;
			while (a%i==0)
				{
					a=a/i;
					b++;
				}
			if(b>0)
				printf("%d\n%d\n",i,b);

	}	
}
