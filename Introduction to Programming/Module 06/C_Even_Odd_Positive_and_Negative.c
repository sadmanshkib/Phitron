#include<stdio.h>
int main()
{   
    int m;
    int n;
    int even=0,odd=0,pos=0,neg=0;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d ",&n);
        if(n%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
        if (n<0)
        {
            neg=neg+1;
        }
        else if(n>0)
        {
            pos=pos+1;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    
    return 0;
}