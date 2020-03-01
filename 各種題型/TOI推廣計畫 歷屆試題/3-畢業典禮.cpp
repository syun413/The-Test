#include <bits/stdc++.h>

int main()
{
    char pAcademy[10]={"AEHILMOST"};
    char Grade[3]={'4','6','8'};
    int N;
    scanf("%d",&N);

    char id[100][10]={}, name[100][11]={};
    for(int i = 0; i < N; i++)
    {
        scanf("%c",&id[i]);
        scanf("%c",&name[i]);
    }

    bool flag[100]={false};  
    int s = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int f = 0; f < N; f++)
            {
                if(flag[f]==false)
                {
                    if(id[f][0]==Grade[j] && id[f][8]==pAcademy[i])
                    {
                        printf("%c",id[f][8]);
                        printf(": ");
                        printf("%c",name[f]);
                        s++;
                        flag[f]=true;
                        if(s == N)
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
