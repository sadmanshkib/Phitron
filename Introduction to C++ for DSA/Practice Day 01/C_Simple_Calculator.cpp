#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin >> a >>b ;
    int sum=a+b;
    long long int mul=a*b;
    int dif=a-b;
    cout << a <<" + "<< b << " = " << sum <<endl;
    cout << a <<" * "<< b << " = " << mul <<endl;
    cout << a <<" - "<< b << " = " << dif <<endl;

    return 0;
}