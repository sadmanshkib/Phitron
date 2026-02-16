#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int n = sizeof(s);
    for (int i = 0; i < n; i++)
    {
        if(s[i] != s[i+1] )
        {
            if( s[i] != s[i=1]+1)
            {
                cout << s[i]+1;
            }
        }
    }
    
    
    return 0;
}