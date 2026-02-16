#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int red = 0;
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (red == 1)
            {

                break;
            }
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                    {
                        red = 1;

                        break;
                    }
                }
                else if (i + j == n - 1)
                {
                    if (a[i][j] != 1)
                    {
                        red = 1;

                        break;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        red = 1;

                        break;
                    }
                }
            }
        }
    }
    else
    {
        red = 1;
    }

    if (red == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}