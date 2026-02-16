#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[10001];
    for (int i = 0; i < t; i++)
    {
        scanf("%s",&s);
        int a[3]={0};
        int n=strlen(s);
        for (int i = 0; i < n; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                a[0]++;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                a[1]++;
            }
            else if(s[i]>=48 && s[i]<=57)
            {
                a[2]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        
        

    }

    
    
    return 0;
}