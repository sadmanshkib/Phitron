#include<stdio.h>
#include<string.h>
int main()
{
    int n=2;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        char s[1000];
        scanf("%s",&s);
        if(strlen(s)<=10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n", s[0],strlen(s)-2,s[strlen(s)-1]);
        }
        
    }
    

    return 0;
}