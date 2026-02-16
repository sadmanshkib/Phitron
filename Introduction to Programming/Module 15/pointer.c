#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",n);
    printf("%p\n",&n);
    int* pnt;
    pnt = &n;
    printf("%p\n",pnt);
    printf("%d\n",*pnt);

    *pnt = 30;
    printf("%p\n",pnt);
    printf("%d",*pnt);


    return 0;
}