#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s",&s);
    int a[27]={0};
    int n=strlen(s);
    for (int i = 0; i < n; i++)
    {
        int val=s[i];
        a[val-97]++;
    }
    int i=0;
    

    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            printf("%c : %d\n",i+97,a[i]);
        }
        // printf("%c : %d\n",i+97,a[i]);
    }
    

    return 0;
}