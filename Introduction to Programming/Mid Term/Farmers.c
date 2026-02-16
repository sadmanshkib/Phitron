#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int m1[t],m2[t],d[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&m1[i]);
        scanf("%d",&m2[i]);
        scanf("%d",&d[i]);
    }
   
        // printf("%d ",m1[0]);
        // printf("%d ",m2[0]);
        // printf("%d \n",d[0]);

    int fd[t];
    for (int i = 0; i < t; i++)
    {
        // printf("%d ",m1[i]);
        // printf("%d ",m2[i]);
        // printf("%d \n",d[i]);
        fd[i]=d[i]-((m1[i]*d[i])/(m1[i]+m2[i]));
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",fd[i]);
    }
    


    


    return 0;
}