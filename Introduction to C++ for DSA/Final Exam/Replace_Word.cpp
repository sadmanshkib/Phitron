#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        string s, x;
        cin >> s >> x;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                int flag = 0;
                for (int j = 0; j < x.size(); j++)
                {
                    if (s[i + j] != x[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    cout << s[i];
                }
                else
                {
                    cout << "#";
                    i = i + x.size() - 1;
                }
            }
            else
            {
                cout << s[i];
            }
        }

        cout << endl;
    }
    return 0;
}