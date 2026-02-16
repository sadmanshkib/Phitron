#include<stdio.h>
int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    int memo=0,momo=0;
    if(a%k==0)
    {
        memo++;
    }
    if(b%k==0)
    {
        momo++;
    }
    if(momo==1&&memo==1)
    {
        printf("Both");
    }
    else if (momo==0&&memo==0)
    {
        printf("No One");
    }
    else if(memo==1)
    {
        printf("Memo");
    }
    else if(momo==1)
    {
        printf("Momo");
    }
    
    return 0;
}