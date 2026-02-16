#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    { 
        
        if (i==7)
        {
            continue;
        }
        printf("hi it's ");
        printf("%d\n",i);
    }
    return 0;
}