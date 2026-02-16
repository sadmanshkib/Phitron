#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    // if (a>b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }

    cout << max(a,b) << endl;
    cout << min(a,b) << endl;

    cout << min({2,5,3,7,5,8,5,8,3,9}) << endl;
    cout << max({2,5,3,7,5,8,5,8,3,9}) << endl;

    // int temp=a;
    // a=b;
    // b=temp;

    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}