#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        if (i < n)
        {

            for (int j = 0; j < x; j++)
            {

                if (i % 2 == 0)
                {
                    printf("#");
                }
                if (i % 2 == 1)
                {
                    printf("-");
                }
            }
            x = x + 2;
        }
        for (int j = n - 1; j < i; j++)
        {
            printf(" ");
        }
        if (i >= n)
        {
            x = x - 2;
            {
                for (int j = 0; j < x - 2; j++)
                {
                    if (i % 2 == 0)
                    {
                        printf("#");
                    }
                    if (i % 2 == 1)
                    {
                        printf("-");
                    }
                }
            }
        }

        printf("\n");
    }

    return 0;
}