#include <stdio.h>
#include <stdlib.h>
int main()
{
char a[10];
int b[10];
int x,y;
int c[3];
for(int i = 1;i <= 9;i++)
	{
		scanf("%c",&a[i]);
	}
for(int i = 1;i <= 9;i++)
	{
		b[i] = a[i]-'0'; 
	}
	c[0] = b[7];
	c[1] = b[8];
	c[2] = b[9];
for(int i = 1;i <= 9;i++)
		for(int j = 1;j <= 9-i;j++)
			{
				if(b[j] > b[j+1])
					{
						int temp;
						temp = b[j];
						b[j] = b[j+1];
						b[j+1] = temp;
					}
			}
x = c[0]*100 + c[1] * 10 + c[2];
y = b[8] * b[8] + b[9] * b[9];
if(x == y)
	printf("Good Morning!\n");
else
	printf("SPY!\n");



	return 0;
}
