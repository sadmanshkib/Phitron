#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",&a,&b);

    int n=strcmp(a,b);
    printf("%d\n",strcmp(a,b));
    
    if(n<0)
    {
        printf("2nd is bigger.");
    }
    if(n==0)
    {
        printf("Both are equal.");
    }
    if(n>0)
    {
        printf("sgvdhb");
    }

    


    // int m=strlen(a);
    // int n=strlen(b);

    // int sum=0;

    // for (int i = 0; i < m+n; i++)
    // {
    //     if(a[i]==b[i])
    //     {
    //         sum=0;
    //     }
    //     else
    //     {
    //         if(a[i]>b[i])
    //         {
    //             sum=1;
    //         }
    //         if(a[i]<b[i])
    //         { 
    //             sum=2;
    //         }
    //         break;
    //     }
        
        
    // }
    
    // if(sum==0)
    // {
    //     printf("%s",a);
    // }
    // if(sum==1)
    // {
    //     printf("%s",b);
    // }
    // if(sum==2)
    // {
    //     printf("%s",a);
    // }
    


    return 0;
}