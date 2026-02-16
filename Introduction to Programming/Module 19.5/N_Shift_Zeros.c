#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    int j = 1, i = 0;
    for (int k = 0; k < n; k++)
    {

        if (a[k] == 0)
        {
            b[n - j] = a[k];
            j++;
        }
        else
        {
            b[i] = a[k];
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}