#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    string x = "Jessica";
    int flag = 0;
    while (ss >> w)
    {

        if (flag == 1)
        {
            break;
        }
        if (w == x)
        {
            flag = 1;
        }
        else
        {
            continue;
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}