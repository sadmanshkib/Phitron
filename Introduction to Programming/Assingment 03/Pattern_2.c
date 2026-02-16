#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = n - 1 - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = i; j >= 0; j--)
        {

            printf("%d", x + j);
        }

        printf("\n");
    }

    return 0;
}