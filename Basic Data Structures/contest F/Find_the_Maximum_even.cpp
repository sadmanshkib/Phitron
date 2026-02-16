#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int ev1 =0,ev2 =0,ov1=0,ov2=0;
    long long int evmx,ovmx;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2 == 0)
            {
                if(a[i] > ev1 || a[i] > ev2)
                {
                    ev1 = max(ev1,ev2);
                    ev2 = a[i];
                }
            }
        else
        {
            if(a[i] > ov1 || a[i] > ov2)
                {
                    ov1 = max(ov1,ov2);
                    ov2 = a[i];
                }
        }
    }
    evmx = ev1 + ev2;
    ovmx = ov1 + ov2;
    long long int ans;
    if(max(evmx,ovmx)%2 == 0)
    {
       ans = max(evmx,ovmx);
    }
    else
        ans = evmx;


    if(ans%2 == 0 && ans != 0)
        cout << ans << endl; 
    else
        cout << -1 << endl;
    
    return 0;
}