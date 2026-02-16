#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag=0;
    for (int i = 0; i < (s.size()/2); i++)
    {
        if(flag ==1)
        {
            break;
        }
        if(s[i]!=s[s.size()-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "NO" ;
    }
    else
    {
        cout << "YES" ;
    }
    
    return 0;
}