#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int x[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            x[i] = b[i];
        }
        if (i >= n)
        {
            x[i] = a[i - n];
        }
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}

