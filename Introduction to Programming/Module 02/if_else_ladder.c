#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    if(money>=15000)
    {
        printf("Will go to thailand");
    }
    else if (money>=5000)
    {
        printf("Will go to beijing");
    }
    else if(money>=1000)
    {
        printf("Will go to the next city");
    }
    else if(money>=500)
    {
        printf("Just got to the canteen");
    }
    else
    {
        printf("No need to go anyware");
    }
    
}