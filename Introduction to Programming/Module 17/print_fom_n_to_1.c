#include<stdio.h>
// void print_number(int n)
// {
//     if (n==0)
//     {
//         return;
//     }
//     if(n%2==0)
//     {
//         printf("%d\n",n);
//     }
//     // printf("%d\n",n); 
//     print_number(n-1);
// }
void print_number(int n,int i)
{
    
    if (i>n)
    {
        return;
    }
    
    // printf("%d\n",n); 
    print_number(n,i+1);
     printf("%d\n",i);
}
int main()
{
    int n,i=1; 
    scanf("%d",&n);
    print_number(n,i);  
    return 0;
}