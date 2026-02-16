#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n;
    cin >> n;
    if (n == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        long double com = (n * 20) / 100;
        cout << ceil(100 / com);
    }

    return 0;
}