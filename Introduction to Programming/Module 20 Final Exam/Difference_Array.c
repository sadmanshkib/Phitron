#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int k = 0; k < x; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        int c[n];
        for (int i = 0; i < n; i++)
        {
            int val=abs(a[i] - b[i]);
            c[i] = val;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}