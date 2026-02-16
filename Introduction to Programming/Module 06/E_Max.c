#include<stdio.h>
int main()
{
    int n=0,x=0,max=0;
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>=max)
        {
            max=x;
        }
    }
    printf("%d",max);
    return 0;
}