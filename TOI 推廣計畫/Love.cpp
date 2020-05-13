#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[1005]={};
	fgets(a, 1003, stdin);

	int k = 0;
	int f = 0;
	while(f == 0)
	{
		char t[1005]={};
		for(int i = 0;i < strlen(a);i++)
		{   
			t[i] = a[i];
			if(isalpha(t[i]))
				{
					char first ='\0';
					char last ='\0';

					if(isupper(t[i]))
						{
							first = 'A';
							last = 'Z';
						}
					else if(islower(t[i]))
						{
							first = 'a';
							last = 'z';
						}

				if((t[i] + k) > last) 
					t[i] = (k - (last - t[i] + 1)) + first;
				else
					t[i] = t[i] + k;
				}
		}

		for(int i = 0;i < strlen(t);i++)
		{
			if( (strncmp(&t[i], "Love", 4) == 0) || (strncmp(&t[i], "love", 4) == 0))
				{
					f = 1;
					break;
				}
		}

		if(f == 1)
			break;
		else
			k++;
	}
	printf("%d", k);
	return 0;
}
