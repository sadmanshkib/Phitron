#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char s[n];
    // gets(s);
    scanf("%s",&s);
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        
        sum=sum+s[i]-48;
        
    }
    printf("%d",sum);
    
    
    return 0;
}