#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	int n[200000];
	int dead[200000]={0};
	scanf("%d %d %d",&a, &b, &c);
    if(a==(c+1))
    {
        int m = 0;
        for(int n=1; n<=a; n++)
        {
            m=(m+b)%n;
        }
        printf("%d\n",m+1);
    }

    else{
    	int origin = a;
        //for(int i = 0; i < a; i++)
        //	n[i] = i+1;
        int now = 1;
        for(int i = 0; i < c; i++)
        {
        	now=(now+b-1)%a;
        	while(dead[now] == 1)
        	{
        		now += 1;
        		if(now>origin)
        			now = 1;
			}
			dead[now] = 1;
            a-=1;
		}
		while(dead[now] == 1)
        {
       		now += 1;
       		if(now>origin)
       			now = 1;
		}
		//printf("%d\n",n[now]);
		printf("%d\n", now);
    }

	return 0;
 } 
