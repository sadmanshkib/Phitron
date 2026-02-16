#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<char> q;
    list<char> red;
    int n;
    cin >> n;
    cin.ignore();
    int have = 0;
    for (int i = 0; i < n; i++)
    {
        string s;

        char c;
        
        cin >> s;
        cin.ignore();
        if (s == "TYPE")
        {
            cin >> c;
            q.push_back(c);
            have = 0;
            
        }
        else if (s == "UNDO")
        {
            if (!q.empty())
            {
                red.push_back(q.back());
                have++;
                q.pop_back();
            }
        }
        else if (s == "REDO")
        {
            if (have > 0 && !red.empty())
            {
                q.push_back(red.back());
                red.pop_back();
                have--;
            }
        }

        // cout << s << endl;
    }

    for (auto it = q.begin(); it != q.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    return 0;
}