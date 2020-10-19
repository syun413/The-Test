#include <stdio.h>
#include <stdlib.h>

#define MAX 100005
int main()
{
    char s[MAX];
    char bors[MAX] = {0};
    int conti[MAX];
    int k;
    int big = 0;
    scanf("%d\n",&k);
    fgets(s, MAX , stdin);
    int end = 0;
    while(s[end]!='\0')
    {
        if(s[end] == '\n')
        	{
            	s[end] = '\0';
        	}
		else	
			{	 
       			end++;
			}
    }
    int now = 0;
    int time = 0;
    for(int i = 0 ;i < end;i++)
	{
        if(s[i] >= 'A' && s[i]<='Z')
		{
            bors[i]='u';
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            bors[i]='d';
        }

    }
    int j = 0;
    int i = 0;
    for(int p = 0 ;p < end;p++)
	{
    	if(bors[i] == 'd')
		{
        	do{
            	time++;
            	i++;
            	p++;
        	}while(bors[i] == 'd');
        	conti[j] = time;
        	time = 0;
        	j++;
    	}
    	if(bors[i] == 'u')
		{
        	 do{
            	time++;
            	i++;
            	p++;
        	}while(bors[i]=='u');
        	conti[j] = time;
        	time = 0;
        	j++;
    	}
    }
      int time_2 = 0;
      if(conti[0] >= k)
      {
          time_2++;
          if(conti[1] >= k)
        {
            time_2++;
        }
         big = time_2;
      }
    for(i = 1; i < j ; i++)
	{
        if(time_2 == 0 && conti[i] == k)
        {
            time_2++;
            if(i > 0 && conti[i-1] >= k)
            {
            	time_2++;
            }
        }
        if(time_2 != 0 && conti[i] == k && conti[i+1] >= k && i + 1 < j)
        {

            time_2++;
        }
        if (time_2 > big)
		{
            big = time_2;
        }
        if (conti[i] != k)
        {
            time_2 = 0;
        }

    }
    printf("%d",big*k);
    return 0;
}
