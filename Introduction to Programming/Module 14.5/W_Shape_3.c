#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = 1;
    for (int i = 0; i < n * 2; i++)
    {

        if (i < n)
        {
            for (int j = n - i - 1; j > 0; j--)
            {
                printf(" ");
            }
            for (int j = 0; j < s; j++)
            {
                printf("*");
            }
            s = s + 2;
        }

        if (i >= n)
        {
            for (int j = 0; j < i-n; j++)
            {

                printf(" ");
            }
            s = s - 2;
            for (int j = 0; j < s; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}