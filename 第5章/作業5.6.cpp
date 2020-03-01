#include <stdio.h>
#include <stdlib.h>

 int day_diff(int year_start, int month_start, int day_start, int year_end, int month_end, int day_end)
{
       int y2, m2, d2;
       int y1, m1, d1;
       m1 = (month_start + 9) % 12;
       y1 = year_start - m1/10;
       d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);
       m2 = (month_end + 9) % 12;
       y2 = year_end - m2/10;
       d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (day_end - 1);
       return (d2 - d1);
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(day_diff(1970, 1, 1, a, b, c) < 0 || (b <= 7 && (b % 2)!=0 && c > 31) || (b <= 7 && (b % 2)==0 && c > 30) )
	{
		printf("0");
		return 0;
	}
	else if(b == 2  && c > 29 || (b > 7 && (b % 2)!=0 && c > 30) ||(b > 7 && (b % 2)==0 && c > 31) )
	{
		printf("0");
		return 0;
	}
	else
	{
		printf("%d\n", day_diff(1970, 1, 1, a, b, c)+1);
    	return 0;
	}
}
