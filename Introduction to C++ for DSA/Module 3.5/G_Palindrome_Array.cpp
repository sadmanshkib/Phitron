#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i <= (n / 2) - 1; i++)
    {
        if (a[i] == a[n - 1 - i])
        {
            flag = 1;
            // cout << a[i] << a[n-1-i] << endl;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}