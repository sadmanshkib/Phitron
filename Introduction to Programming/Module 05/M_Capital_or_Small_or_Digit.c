#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=48 && x<65)
    {
        printf("IS DIGIT");
    }
    if(x>=65 && x<97)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    if(x>=97)
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }

    return 0;
}