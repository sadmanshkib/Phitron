#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int ans=0;
    int n=strlen(s);
    // printf("%d\n",n);
    // printf("%d",strlen(s));
    for(int i=0;i<=n/2-1;i++)
    {
        
        if(s[i]==s[n-2-i])
        {
            ans=1;
        }
        else
        {
            ans=0;
            
            break;
        }
        
    }
    if(ans==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }

    return 0;
}