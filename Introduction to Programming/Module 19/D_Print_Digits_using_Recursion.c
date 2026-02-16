#include <stdio.h>

void print_num(int x)
{
    if (x == 0)
    {
        return;
    }

    print_num(x / 10);
    int mod = x % 10;
    printf("%d ", mod);
}

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        print_num(x);
        if (x == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}