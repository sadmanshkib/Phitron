#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int x;
    scanf("%d",&x);
    // for (int j = 0; j < c; j++)
    // {
    //     printf("%d ",a[x-1][j]);
    // }

    for (int j = 0; j < r; j++)
    {
        printf("%d\n",a[j][x]);
    }
    
    
    return 0;
}