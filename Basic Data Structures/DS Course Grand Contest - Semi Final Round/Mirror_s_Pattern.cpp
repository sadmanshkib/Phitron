#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   for (int i = 1; i <= n; i++)
    {
        
        if(i==1)
        {
            for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        }
       
        if(i>1 && i<n)
        {
            cout << i ;
            for (int j = 2; j < n; j++)
            {
                cout << " ";
            }
            
            cout << n-i+1;
        }

        if(i==n && i!=1)
        {
            for (int j = n; j >=1; j--)
        {
            cout << j;
        }
        }
        
        cout << endl;
    }
    cout << endl;

    
    

    return 0;
}