#include<stdio.h>
int main()
{
    int n=0,i=0,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);

        }
        
        printf("\n");
    }
    
    return 0;
}