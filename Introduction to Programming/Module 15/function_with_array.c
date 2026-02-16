#include<stdio.h>
void arr (int a[], int n)
{
    a[1]=300;
    
    
}
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    

    
    

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    
    return 0;
}