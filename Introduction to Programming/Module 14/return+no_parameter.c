#include<stdio.h>

int get_sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    return sum;
}
int get_sub()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sub= a - b;
    return sub;
}
int get_mul()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int mul=a*b;
    return mul;
}
int get_div()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int div=a/b;
    return div;
}

int main()
{
    int ans= get_sum();
    int ans2= get_sub();
    int ans3= get_mul();
    int ans4= get_div();
    printf("%d %d %d %d",ans,ans2,ans3,ans4);
    return 0;
}