#include<stdio.h>

int gte_sum(int a,int b)
{
    int sum = a + b;
    return sum;
}
int get_sub(int a,int b)
{
    int sub= a - b;
    return sub;
}
int get_mul(int a,int b)
{
    int mul= a * b;
    return mul;
}
int get_div(int a,int b)
{
    int div= a - b;
    return div;
}

int main()
{
    int sum = gte_sum(2,30);
    int sub =get_sub(40,32);
    int mul =get_mul(7,8);
    int div =get_div(40,4);
    printf("%d %d %d %d",sum,sub,mul,div);

    return 0;
}