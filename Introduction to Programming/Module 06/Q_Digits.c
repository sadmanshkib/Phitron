#include<stdio.h>
int main()
{
    int n=0,x=0;
    int mod=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        scanf("%d",&x);
        if(x==0)
        {
            printf("%d",x);
        }
        for(int j=1;j>=1;j++)
        {
           
            mod=x%10;
            if(x==0)
            {
                break;
            }
            printf("%d ",mod);
            x=x/10;
        }
        printf("\n");
    }
    return 0;
}