#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    
    scanf("%d %d %d",&a,&b, &c);
    int max=a, min=a;
    
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    //min
    if(min>b)
    {
        min=b;
    }
    if(min>c)
    {
        min=c;
    }
    
    printf("%d %d",min, max);
    return 0;
}