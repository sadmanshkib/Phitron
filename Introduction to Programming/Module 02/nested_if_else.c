#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    if(money>=5000)
    {
        printf("you can go to beijing.\n");  
        if(money>=10000)
        {
            printf("You can also travel to Yangzhou");
        }
        else
        {
            printf("You have traveled enough");
        }
    }
    else
    {
        printf("you can't go to beijing");
    }
}