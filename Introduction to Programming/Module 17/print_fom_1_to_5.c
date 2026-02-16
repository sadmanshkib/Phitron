#include<stdio.h>
void print_number(int i)
{
    if (i==6)
    {
        return;
    }
    
    printf("%d\n",i); 
    print_number(i+1);
}
int main()
{
    int i=1; 
    print_number(i);  
    return 0;
}