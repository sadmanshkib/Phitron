#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int sum=0;
    gets(a);

    //** normal way 
    // for(int i=0;i<50;i++)
    // {
    //     if(a[i]=='\0')
    //     break;
    //     sum=sum+1;
    // }


    // useing strlen 
    // int count = strlen(a);

    // printf("%d",count);

    printf("%d",strlen(a));
    return 0;
}