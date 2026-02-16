#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i == 0)
            b[i] = a[i];
        else
            b[i] = b[i-1]+ a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;


    long long int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(b[i] == b[n-1]-b[i])
            ans++;
    }
    
    if(n == 1)
        cout << 0 << endl;
    else
        cout << ans << endl;
    
    
    return 0;
}