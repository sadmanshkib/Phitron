#include<stdio.h>
int main()
{
    int x=0;
    int i=0;
    
    for(i=1;i>0;i++)
    {
        scanf("%d",&x);
        
        if(x==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
    return 0;
}