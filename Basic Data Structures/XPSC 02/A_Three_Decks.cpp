#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        long long int total = a+b+c;
        if(total % 3 == 0 && total/3 < c && total/3 >= b && total/3 >= a )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}