#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l,r,sum=0;
        
        cin >> l >> r;
        for (int i = l-1; i < r; i++)
        {
            sum=sum+a[i];
        }
        cout << sum << endl;
        
    }
    
    
    return 0;
}