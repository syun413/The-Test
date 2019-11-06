#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;

    scanf("%d %d", &m, &n);
    int max_num[m];
    for (int i = 0; i < m; i++)
    {
        max_num[i] = 0;
    }

    int num;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            max_num[i] = max(max_num[i], num);
        }
        sum += max_num[i];
    }

    printf("%d\n", sum);
    bool h = false;
    for (int i = 0; i < m; i++)
    {
        if (sum % max_num[i] == 0)
        {
            if (h)
            {
                printf(" ");
            }
            printf("%d", max_num[i]);

            h = true;
        }
    }
    if (!h)
    {
        printf("-1");
    }
    return 0;
}
