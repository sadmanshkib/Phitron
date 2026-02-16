#include<stdio.h>
int main()
{
    int x=0;
    int ans=0;
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        if(x<10)
        {
            break;
        }
        x=x/10;
        
    }
    if(x%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    
    return 0;
}