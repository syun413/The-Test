#include <stdio.h>
#include <stdlib.h>
int main(int argv, char **argc)
{
    int a[5];
    int *ptr = a;
    int i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &(a[i]));
    }
    for(i = 0, ptr = a; i < 5; i++, ptr++)
    {
        printf("%p\n",ptr);
        *ptr += 3;
    }
    for(i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i ,a[i]);
    return 0;
}
