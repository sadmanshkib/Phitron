#include<stdio.h>
void print_number(int i,int n)
{
    if (i>n)
    {
        return;
    }
    
    printf("%d\n",i); 
    print_number(i+1,n);
}
int main()
{
    int i=1,n; 
    scanf("%d",&n);
    print_number(i,n);  
    return 0;
}