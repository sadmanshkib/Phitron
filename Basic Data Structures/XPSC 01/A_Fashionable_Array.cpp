#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int mini = a[0];
        int max = a[n - 1];

        if (mini % 2 == max % 2)
            cout << 0 << endl;
        else
        {
            int i = 0, j = n - 1, cnt1 = 0, cnt2 = 0;

            while (a[i] % 2 != max % 2)
            {
                i++;
                cnt1++;
            }

            while (a[j] % 2 != mini % 2)
            {
                j--;
                cnt2++;
            }
            cout << min(cnt1, cnt2) << endl;
        }
    }

    return 0;
}