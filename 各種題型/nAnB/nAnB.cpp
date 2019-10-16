#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ans[4];
	while(1)
	{
		scanf("%d %d %d %d",&ans[0], &ans[1], &ans[2], &ans[3]);
		int n;
		scanf("%d",&n);
		int input[4];
		for(int i = 0; i < n; i++)
		{
			int temp[4] = {0};
			scanf("%d %d %d %d",&input[0], &input[1], &input[2], &input[3]);
			int ctA = 0;
			int ctB = 0;
			for(int j = 0; j < 4; j++)
			{
				if(input[j] == ans[j])
				{
					temp[j] = 1;
					ctA++;
				}
			}
			for(int j = 0; j < 4; j++)
				if(ans[j] != input[j])
					for(int k = 0; k < 4; k++)
					{
						//printf("ans:%d input:%d temp:%d\n",ans[k], input[j], temp[k]);
						if(ans[k] == input[j] && temp[k] == 0)
						{
							ctB++;
							break;
						}
					}

			printf("%dA%dB\n",ctA,ctB);
		}
        char next;
        if(scanf("%c",&next)==EOF)
			break;
		printf("next:%c kkkk\n",next);
		if(next != '\n')
			break;
	}
	return 0;
}
