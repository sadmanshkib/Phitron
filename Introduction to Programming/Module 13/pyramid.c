#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star=1; 
    for (int i = 1; i <= n; i++)
    { 
        for (int j = n-i; j >0; j--)
        {
            printf("  ");
        }
        
        for (int j = 0; j < star; j++)
        {
            printf("* ");
            
        }
        star=star+2;
        
        printf("\n");
    }

    return 0;
}