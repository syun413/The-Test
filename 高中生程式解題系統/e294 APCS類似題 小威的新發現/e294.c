#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mypow(int a, int n)
{
	int b = 1;
	for(int i =0 ;i <n ;i++)
		b*=a;
	return b;
}
int my_atoi(char a[])
{
	int out = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		out += (a[i] - '0') * mypow(10,strlen(a) - i - 1); 
	}
	return out;
}
void find_greater(char arr[], char input[])
{
	int flag = 0;
	for(int i = 0; i < strlen(input); i++)
	{
		if(flag == 1){
			arr[i] = '1';
			continue;
		}
		if((input[i]-'0') % 2 == 1)
		{
			arr[i] = input[i];
		}
		else
		{
			arr[i] = input[i] + 1;
			flag = 1;
		}
	}
	//printf("arr:%s, input:%s\n",arr,input);


}

void find_lower(char arr[], char input[])
{
	int flag = 0;
	for(int i = 0; i < strlen(input); i++)
	{
		if(flag == 1)
		{
			arr[i] = '9';
			continue;
		}
		if((input[i]-'0') % 2 == 1)
		{
			arr[i] = input[i];
		}
		else
		{
			if(input[i] == '0')
			{
				arr[i] = '9';
				for(int j = i - 1; j >= 0; j--)
				{
					if(arr[j] -'0'- 2 < 0)
					{
						if(j !=0 )
							arr[j] = '9';
						else{
							arr[j] = '0';
						}
					}
					else
					{
						arr[j] = arr[j] - 2;
						break;
					}
				}
			}
			else{
				arr[i] = input[i] - 1;
			}
			flag = 1;
		}
	}
	//printf("arr:%s, input:%s\n",arr,input);
}

int main(){
	char input[20];
	while(scanf("%s",input)!=EOF)
	{
		char K_greater[20] = {'/0'};
		char K_lower[20] = {'/0'};
		find_greater(K_greater, input);
		find_lower(K_lower, input);

		//int N = my_atoi(input);
		//int K_g = my_atoi(K_greater);
		//int K_l = my_atoi(K_lower);
		int N = atoi(input);
		int K_g = atoi(K_greater);
		int K_l = atoi(K_lower);
		//printf("N:%d K_g:%d K_l:%d\n",N,K_g,K_l);
		if(K_g-N < N-K_l)
			printf("%d\n",K_g-N);
		else
			printf("%d\n",N-K_l);
	}
	return 0;
}
