#include<stdio.h>
int main()
{
    char a[100];

    fgets(a,90,stdin);
    // gets(a);

    // scanf("%s",&a);
    printf("%s",a);

    return 0;
}