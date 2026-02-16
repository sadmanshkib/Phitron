#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int m, forth;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        forth = m / (a * b * c);
        if (forth * a * b * c == m)
        {
            printf("%lld\n", forth);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}