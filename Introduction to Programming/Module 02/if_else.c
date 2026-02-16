#include<stdio.h>
int main()
{
    int money;
    printf("How much money do you have:\n");
    scanf("\n%d", & money);
    if(money>=2000)
    {
        printf("You can go to Beijing");
    }
    else
    {
        printf("You can't go.");
    }
}