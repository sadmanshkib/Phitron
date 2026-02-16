#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int not= 2;
    if (r == c)
    {
        // for (int i = 0; i < r; i++)
        // {
        //     if (not== 1)
        //     {
        //         break;
        //     }
        //     for (int j = 0; j < c; j++)
        //     {
        //         if (not== 1)
        //         {
        //             break;
        //         }

        //         if (i == j)
        //         {
        //             continue;
        //         }
        //         else
        //         {
        //             if (a[i][j] != 0)
        //             {
        //                 not= 1;
        //                 break;
        //             }
        //         }
        //     }
        // }
        for (int i = 0; i < r; i++)
        {
            for (int  j = 0; j < c; j++)
            {
                if (i+j==r-1)
                {
                    continue;
                }
                if(a[i][j]!=0)
                {
                    not=1;
                }
                
            }
            
        }
        
    }
    else
    {
        not= 1;
    }

    if (not== 0)
    {
        printf("A primary Diagonal Matrix");
    }
    else if (not==2)
    {
        printf("A secondary Diagonal Matrix");
    }
    
    else
    {
        printf("Not a primary or secondary  Diagonal Matrix");
    }

    return 0;
}