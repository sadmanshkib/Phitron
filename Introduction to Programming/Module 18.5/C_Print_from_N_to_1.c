#include<stdio.h>
void print_n(int n,int i)
{
   
    if (i>n)
    {
        return;
    }
     print_n(n,i+1);
     if(i==1)
     {
        printf("%d",i);
     }
     else
     {
        printf("%d ",i);
     }
    
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    print_n(n,i);

    return 0;
}