#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    // gets(a);
    fgets(a,1000001,stdin);   

    // for(int i=0;i<1000001;i++)
    // {
    //     if(a[i]=='\\')
    //     {
    //         break;
    //     }
    //     printf("%c",a[i]);
    // }
    int i=0;
    while (a[i]!='\\')
    {
        printf("%c",a[i]);
        i++;
    }
    

    // printf("\n%s",a);
    return 0;
}