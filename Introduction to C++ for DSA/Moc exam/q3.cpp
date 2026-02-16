#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,c=0,ex=0;
        cin >> n;
        c=n/5;
        // cout << c << " ";
        
        for(int i=c;i>=3;i=i/3)
        {
            // cout << i/3 << " ";
            ex=ex+(i/3);
        }
        
        // cout << c << " ";
        
        int sum=ex+c;
        
        cout << sum << endl;
    }
    
    return 0;
}