#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int k = min({a,b,c});
    int l = max({a,b,c});

    cout << k << " " << l;
    return 0;
}