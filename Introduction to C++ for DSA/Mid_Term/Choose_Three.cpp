#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (flag == 1)
            {
                break;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (flag == 1)
                {
                    break;
                }
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        flag = 1;
                        
                        break;
                    }
                }
            }
        }

        if (n < 3 || flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}