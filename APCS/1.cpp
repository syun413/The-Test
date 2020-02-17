#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char a[1005];
int j = 0,k = 0,x = 0;
scanf("%s",a);
 
for(int i = 0;i < strlen(a);i += 2)
	j = j + a[i] - '0';
for(int i = 1;i < strlen(a);i += 2)
	k = k + a[i] - '0';
x = j - k;
if(x >= 0)
	printf("%d",x);
else if(x < 0)
	printf("%d",-x);

	return 0;
}
