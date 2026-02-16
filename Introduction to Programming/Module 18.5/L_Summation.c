#include <stdio.h>
long long int get_sum(int a[], int n, int i, long long int sum)
{
    if (i == n)
    {
        return sum;
    }
    sum = sum + a[i];
    get_sum(a, n, i + 1, sum);
}
 
int main()
{
    int n, i = 0;
    long long int sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    sum = get_sum(a, n, i, sum);
    printf("%d", sum);
    return 0;
}