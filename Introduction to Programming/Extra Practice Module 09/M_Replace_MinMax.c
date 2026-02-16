#include<stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=INT_MAX;
    int max=INT_MIN;

    int min_ind,max_ind;

    for(int i=0;i<n;i++)
    {
        
        if(a[i]>max)
        {
            max=a[i];
            max_ind=i;
        }
        if (a[i]<min)
        {
            min=a[i];
            min_ind=i;
        }
    }
    int temp;
    temp=a[max_ind];
    a[max_ind]=a[min_ind];
    a[min_ind]=temp;
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}