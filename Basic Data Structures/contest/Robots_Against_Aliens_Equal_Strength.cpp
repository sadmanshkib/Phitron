#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    long long int a[n][m];
    int r[100]={0};
    int rsum[100]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==0)
            {
                r[i]=i;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rsum[i]=rsum[i]+a[i][j];
        }
        
    }
    int flag= 0;
    if(n==1)
    {
        flag =1;
    }
    else
    {
        for (int i = 0; i < n; i++)
    {
        if(flag <0)
            {
                break;
            }
        for (int j = i+1; j < n; j++)
        {
            if(flag <0)
            {
                break;
            }
            if(rsum[i]=rsum[j])
            {
                flag= 1;
            }
            else
            {
                if(r[i]>0 || r[j]>0)
                {
                    flag=1;
                }
                else
                {
                    flag = -1;
                }
            }
        }
        
    }

    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << rsum[i] << " ";
    // }
    
    cout << flag << endl;
    cout << rsum[0] << endl;
    cout << rsum[1] << endl;



    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << endl;
        
    // }
    
    return 0;
}