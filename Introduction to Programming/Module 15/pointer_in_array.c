#include<stdio.h>
#include<string.h>
int main()
{
    int a[5]={3,6,3,5,9};
    // printf("%d\n",a[0]);
    // printf("%p\n",a);
    // printf("%p\n",&a[0]);
    // printf("%d\n",a[1]);
    // printf("%p\n",&a[1]);

     printf("%d\n",strlen(a));
     
    *(a+4)=100;
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",a[i]);
     }
     

    return 0;
}