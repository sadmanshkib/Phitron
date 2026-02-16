#include<stdio.h>
// void print_array(int a[],int n)
// {
//     if(n== 0)
//     {
//         return;
//     }
//     printf("%d ",a[n-1]);
//     print_array(a,n-1);
// }
void print_array(int a[],int n,int i)
{
    if(n== i)
    {
        return;
    }
    print_array(a,n,i+1);
    printf("%d ",a[i]);
     
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    print_array(a,n,0);
    
    return 0;
}