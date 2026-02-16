#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[51],b[51];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s",&a,&b);
        int n=strlen(a)+strlen(b);
        char s[n];
        int dif=strlen(a)-strlen(b);
        
            if(dif==0)
            {
                if(i%2==0)
                {
                    s[i]=a[i/2];
                }
                if(i%2==1)
                {
                    s[i]=b
                }
            }
            
        
        



    }
    printf("%s %s",a,b);

    return 0;
}