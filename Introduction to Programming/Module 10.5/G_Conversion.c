#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);

    for(int i=0;i<strlen(s);i++)
    {
        int temp=s[i];
        if(temp>=65 && temp<97)
        {
            printf("%c",s[i]+32);
        }
        if( temp>=97 && temp<=122)
        {
            printf("%c",s[i]-32);
        }
        if(temp ==',')
        {
            char a=' ';
            printf("%c",a);
        }

        // char a=' ';
        // printf("%d ",a);
    }
    return 0;
}