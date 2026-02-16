#include<stdio.h>
#include<string.h>
void stn (char s[])
{
    printf("%s\n",s);
    printf("%d",strlen(s));

}
int main()
{
    char s[10];
    scanf("%s",&s);
    stn(s);

    return 0;
}