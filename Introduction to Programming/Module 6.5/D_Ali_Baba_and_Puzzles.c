#include<stdio.h>
int main()
{
    long long int a=0,b=0,c=0;
    long long int d=0;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a+b-c==d || a+b*c==d || a-b+c==d || a-b*c==d || a*b+c==d || a*b-c==d )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}