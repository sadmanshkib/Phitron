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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (a[j] == a[i] + 1)
            {
                count++;
                break;
            }
        }
    }
    cout << count;

    return 0;
}