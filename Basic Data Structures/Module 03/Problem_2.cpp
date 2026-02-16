#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    b[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        b[i]=a[i]+b[i-1];
    }

    c[n-1]=a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        c[i]=a[i]+c[i+1];
    }

    for (int i = 0; i < n; i++)
    {
        if(b[i]==c[i])
        {
            cout << i;
            break;
        }
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
    //  for (int i = 0; i < n; i++)
    // {
    //     cout << c[i] << " ";
    // }
    
    
    return 0;
}