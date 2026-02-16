#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> a(n);
    vector<long long int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i] + b[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            cout << b[r - 1] << endl;
        }
        else
        {
            long long int sum = b[r - 1] - b[l - 2];
            cout << sum << endl;
        }
    }

    return 0;
}