#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int x[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {

        if (i < n - 1)
        {
            if (a[i] < a[i - 1] && a[i] < a[i + 1])
            {
                x[i] = 1;
            }
        }
        x[i] = x[i - 1] + x[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << x[i] << " ";
    // }
    // cout << endl;

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;

        cout << x[r - 1] - x[l - 2] << endl;
    }

    return 0;
}