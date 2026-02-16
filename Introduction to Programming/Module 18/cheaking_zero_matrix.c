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
    int not=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            if (not==1)
            {
                break;
            }
            
            
            if (a[i][j]!=0) 
            {
                not=1;
                break;
            }
            
            
            
        }
        
    }
    if (not==1)
            {
                printf("Not a Zero Matrix.");
            }
    else
    {
        printf("A Zero Matrix.");
    }
    return 0;
}