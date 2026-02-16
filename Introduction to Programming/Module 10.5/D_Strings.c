#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s",&a);
    scanf("%s",&b);

    printf("%d ",strlen(a));
    printf("%d\n",strlen(b));
    // char c[21]={a,b};

    printf("%s%s\n",a,b);
    
        char d=a[0];
        a[0]=b[0];
        
        b[0]=d;
    printf("%s %s",a,b);

    return 0;
}