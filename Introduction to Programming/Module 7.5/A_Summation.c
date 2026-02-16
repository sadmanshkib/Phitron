#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n], sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
       
        sum=sum + arr[j];
        

    }
    if(sum<0)
    {
        sum=sum*(-1);
    }
    printf("%lld",sum);
    
    
    return 0;
}