#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hit[45]={0};
    for(int i=0;i<9;++i)
    {
        int a=0;
        scanf(" %d",&a);
        for(int j=0;j<a;++j)
        {
            char c1,c2;
            scanf(" %c%c",&c1,&c2);
            if(c2=='O')
            {
                hit[j*9+i]='O';
            }
            else
            {
                hit[j*9+i]=c1;
            }
        }
    }

    int base[3]={0};
    int b=0,out=0,score=0,now=0;
    scanf(" %d",&b);
    while(b>0)
    {
        if(hit[now]=='O')
        {
            out+=1;
            if(out%3==0)
            {
                out=0;
                base[0]=0;
                base[1]=0;
                base[2]=0;
            }
            b-=1;
        }
        else
        {
            if(hit[now]=='H')
            {
                for(int k=0;k<3;++k)
                {
                    if(base[k])
                    {
                        score+=1;
                        base[k]=0;
                    }
                }
                score+=1;
            }
            
            else if(hit[now]=='1')
            {
                if(base[2])score+=1;
                base[2]=base[1];
                base[1]=base[0];
                base[0]=1;
            }
            else if(hit[now]=='2')
            {
                if(base[2])score+=1;
                if(base[1])score+=1;
                base[2]=base[0];
                base[0]=0;
                base[1]=1;
            }
            else if(hit[now]=='3')
            {
                if(base[2])score+=1;
                if(base[1])score+=1;
                if(base[0])score+=1;
                base[1]=0;
                base[0]=0;
                base[2]=1;
            }
        }
        now+=1;
    }

    printf("%d",score);

    return 0;
}
