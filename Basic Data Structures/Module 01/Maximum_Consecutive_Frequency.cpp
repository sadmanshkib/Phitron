#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count=1;
    int mxc=0;
    int val=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            if(count>mxc)
            {
                mxc=count;
                val=i;
            }
            count=1;
        }
    }
    cout << a[val] << " " << mxc;
    
    
    return 0;
}