#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        
        if(arr[j]<0)
        {
            arr[j]=2;
        }
        else if(arr[j]>0)
        {
            arr[j]=1;
        }
       
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}