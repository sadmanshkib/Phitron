#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_val=INT_MAX;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int temp=a[i]+a[j]+j-i;
                min_val= min(min_val,temp);
            }
            
        }
        cout << min_val;
        
    }
    
    return 0;
}