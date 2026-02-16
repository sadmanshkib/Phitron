#include<stdio.h>

void pass(int n)
{
    n=20;
    printf("%d\n",n);
    printf("pass function address %p\n",&n);
}
int main()
{
    int n=15;
    printf("%d\n",n);
    printf("main function address %p\n",&n);
    pass(n);
    return 0;
}