#include<stdio.h>

void pass(int* p)
{
    *p=20;
    
}
int main()
{
    int n=15;
    
    printf("%d\n",n);
    pass(&n);
    printf("%d\n",n);
    // printf("main function address %p\n",&n);
    
    return 0;
}