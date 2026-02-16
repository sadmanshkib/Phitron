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
    int x;
    scanf("%d",&x);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j <= n; j++)
    //     {
    //         if (a[i] + a[j] == x)
    //         {
    //             printf("%d %d\n", a[i],a[j]);
    //         }
    //     }
    // }
    int sum=0;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                sum++;
                printf("%d %d \n",a[i],a[j]);
            }
        }
    }

    if (sum>0)  
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    

    return 0;
}