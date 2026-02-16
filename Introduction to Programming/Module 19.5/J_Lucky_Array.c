#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = INT_MAX, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            count = 0;
        }
        if (min == a[i])
        {
            count++;
        }
    }
    // printf("%d",count);
    if (count % 2 == 1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}