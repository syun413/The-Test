#include <bits/stdc++.h>
int main()
{
char s[501]={};
	scanf("%s",s);

	int l = strlen(s);
	
	if(l % 2 != 0)
	{
		printf("NO");
		return 0;
	}
	char f[251]={};
	strncpy(f, s, l/2);

	char b[251]={};
	for(int i = 0; i < l/2; i += 1)
	{
		b[i] = s[(l - 1) - i];
	}

	if(strncmp(f, b, l/2) == 0)
	{
		printf("YES\n");
		printf("%s",f);
	}
	else 
		printf("NO");



	return 0;
}
