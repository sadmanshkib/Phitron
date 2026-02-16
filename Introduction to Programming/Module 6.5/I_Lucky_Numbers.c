#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n%10;
    j=n/10;
    

    if(i%j==0 || j%i==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

   
    return 0;
} 