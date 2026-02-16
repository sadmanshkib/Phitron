#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int con=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]!= 'a'&& s[i]!=  'e' && s[i]!= 'i'&& s[i]!= 'o'&& s[i]!= 'u')
        {
            con++;
        // printf("%c\n",s[i]);
        }
    }
    printf("%d",con);
    
    return 0;
}