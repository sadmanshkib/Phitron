#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
        }

        int total=0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                total = total + cnt1 -1;
            }
            else
            {
                total = total + cnt1 + 1;
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}