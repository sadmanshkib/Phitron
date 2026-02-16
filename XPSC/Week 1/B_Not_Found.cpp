#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin,s);
    bool a[27] = {false};
    int cmax = 0, cmin = 1000;
    for (char c : s)
    {
        int x = c;
        a[x - 97] = true;
        if (c < cmin)
        {
            if(c>=97)
            cmin = c;
        }
        if (c > cmax)
        {
            cmax = c;
        }
    }

    bool flag = false;
    for (int i = cmin - 97; i < cmax - 97; i++)
    {
        if (a[i] == false)
        {
            flag = true;
            char c = i + 97;
            cout << c << endl;
            break;
        }
    }
    if (!flag)
        cout << "None" << endl;

    return 0;
}