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
    int i=0;
    while(i<n/2)
    {
       
         int tmp=0;
        tmp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=tmp;
        

        i++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}