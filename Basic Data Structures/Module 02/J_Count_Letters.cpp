#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[27] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i];

        a[x - 97]++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (a[i] != 0)
        {
            char k = i + 97;
            cout << k << " : " << a[i] << endl;
        }
    }

    return 0;
}