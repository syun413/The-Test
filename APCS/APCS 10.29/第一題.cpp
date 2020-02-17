#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if(a < b)
    {
        t = 0;
        t = a;
        a = b;
        b = t;
    }
    if(a < c)
    {
        t = 0;
        t = a;
        a = c;
        c = t;
    }
    if(b < c)
    {
        t = 0;
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n",c,b,a);
    if(b + c <= a) 
    	printf("No");
	else if(c * c + b * b < a * a)
		printf("Obtuse");
	else if(c * c + b * b == a * a)
		printf("Right");
	else if(c * c + b * b > a * a) 
		printf("Acute");

	return 0;
}
