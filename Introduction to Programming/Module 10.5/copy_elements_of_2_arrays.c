#include<stdio.h>
int main()
{
    int n_1,n_2;
    scanf("%d",&n_1);
    int a[n_1];
    for(int i=0;i<n_1;i++)
    {
        scanf("%d",&a[i]);
    }  
    scanf("%d",&n_2);
    int b[n_2];
    for(int i=0;i<n_2;i++)
    {
        scanf("%d",&b[i]);
    }
    int n_3=n_1+n_2;
    int c[n_3];
    for(int i=0;i<n_1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n_2;i++)
    {
        c[n_1+i]=b[i];
    }
    for(int i=0;i<n_3;i++)
    {
        printf("%d ",c[i]);
    }




    return 0;
}