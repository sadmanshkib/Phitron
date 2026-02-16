#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (-1000 <= n <= 1000)
    {
        if (n == 0)
        {
            printf("Zero");
        }
        else
        {
            printf("Non Zero");
        }
    }
    return 0;
}