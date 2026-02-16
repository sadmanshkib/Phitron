#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int a[27] = {0};
    int flag = -1;
    char x;

    for (int i = 0; i < n; i++)
    {
        int c = s[i];
        a[c - 97]++;
    }

    char val;
    for (int i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            break;
        }

        int c = s[i];
        // cout << s[i] << " " << a[c-97];
        if (a[c - 97] == 1)
        {
            // cout << s[i] << endl;
            flag = 0;
            val = s[i];
        }
        else
        {
        }
    }

    // cout << flag;
    if (flag == 0)
    {
        cout << val << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}