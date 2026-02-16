#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        cin.ignore();
        stack<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty() == true)
            {
                s.push(str[i]);
            }
            else if (s.top() != str[i])
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }

        if (s.empty() == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}