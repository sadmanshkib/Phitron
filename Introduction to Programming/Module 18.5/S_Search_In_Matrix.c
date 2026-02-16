#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int is_in = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_in == 1)
        {
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                is_in = 1;
                break;
            }
        }
    }

    if (is_in == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}