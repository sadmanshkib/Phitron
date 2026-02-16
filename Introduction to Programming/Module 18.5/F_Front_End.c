#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i<n / 2; i++)
    {

        printf("%d %d ", a[i], a[n-1-i]);
    }
    if (n % 2 != 0)
    {
        printf("%d", a[n / 2]);
    }

    return 0;
}