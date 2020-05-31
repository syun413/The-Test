#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3];
    int b[5];
    int c[5];
    int three = 0;
    int sum = 0;
    for(int i = 0;i < 3;i++)
        scanf("%d",&a[i]);
    for(int i = 0;i < 5;i++)
        scanf("%d",&b[i]);
    for(int i = 0;i < 5;i++)
        scanf("%d",&c[i]);
    for(int i = 0;i < 5;i++){
        if(a[0] == b[i])
            sum += c[i];
        else continue;
    }
    for(int i = 0;i < 5;i++){
        if(a[1] == b[i])
            sum += c[i];
        else continue;
    }
    for(int i = 0;i < 5;i++){
        if(a[2] == b[i]){
            sum -= c[i];
            three++;
        }
        else continue;
        
    }
    if(three == 0)
        sum = sum * 2;
    if(sum < 0)
        sum = 0;
    printf("%d\n",sum);
    return 0;
}
