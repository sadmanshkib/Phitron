#include<stdio.h>
void print_n(int n,int i)
{

    printf("%d\n",i);
    if (i==n)
    {
        return;
    }
    print_n(n,i+1);
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    print_n(n,i);

    return 0;
}