#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' )
        {
            int j=i+1;
            if(s[j]=='G' && s[j+1]=='Y' && s[j+2]=='P' && s[j+3]=='T')
            {
                i=i+4;
                cout << " ";
            }
            else
            {
                cout << s[i];
            }
            
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}