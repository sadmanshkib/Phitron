#include<stdio.h>
int main()
{
    int a=0;
    long long int b=0;
    double c=0; 
    char d;
    
    scanf("%d %lld %lf %c",&a ,&b ,&c , &d);

    printf("%d\n%lld\n%.2lf\n%c",a,b,c,d);

    return 0;
}