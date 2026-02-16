#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[27] = {0};
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - 65;
            // cout << x <<endl;
            if (a[x] == 0)
            {
                a[x] = a[x] + 2;
            }
            else
            {
                a[x]++;
            }
        }
        int sum=0;
        for (int i = 0; i < 26; i++)
        {
          sum=sum+a[i];  
        }
        cout << sum << endl;
        
    }

    return 0;
}