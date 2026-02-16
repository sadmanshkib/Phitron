#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int cind,rind;
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j]==1)
            {
                rind=i;
                cind=j;
            }
        }
        
    }
    // printf("%d %d\n",rind,cind);
    int final= abs(rind-2) + abs(cind-2);
    printf("%d", final);
    
    return 0;
}