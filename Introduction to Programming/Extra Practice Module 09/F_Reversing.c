#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        if(i>n/2-1)
        {
            break;
        }

        
        int temp;
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}