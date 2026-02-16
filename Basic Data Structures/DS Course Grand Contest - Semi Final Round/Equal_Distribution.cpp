#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int k;

    
    cin >> n >> k;
    if(k == 0)
    {
        cout << "0" << " " << "0" << endl;
    }

    else
    {
        cout << k/n << " " << k%n << endl;
    }
    return 0;
}