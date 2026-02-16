#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    --n;
    for(int i=0;i<n;i++)
    {
        int tmp=0;
        tmp=a[i];
        a[i]=a[n-i];
        a[n-i]=tmp;
      
         if(i==n/2)
         {
            break;
         }
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}