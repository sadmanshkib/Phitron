#include<stdio.h>

void get_sum(int a, int b)
{
    int sum=a+b;
    printf("%d ",sum);   
}
void get_sub(int a, int b)
{
    int sub=a-b;
    printf("%d ",sub);   
}
void get_mul(int a, int b)
{
    int mul=a*b;
    printf("%d ",mul);   
}
void get_div(int a, int b)
{
    int div=a/b;
    printf("%d ",div);   
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    get_sum(a,b);
    get_sub(a,b);
    get_mul(a,b);
    get_div(a,b);
    
    return 0;
}