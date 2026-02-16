#include<stdio.h>
int main()
{
    int n=0;
    char c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            c=64+i;
            printf("%c ",c);
        }
        printf("\n");
    }
    
    return 0;
}