#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    for (int i = 0; i <= 5 + (n / 2); i++)
    {
        for (int j = 5 + (n / 2)-i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < count; j++)
        {
            printf("*");
        }
        printf("\n");
        count = count + 2;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}