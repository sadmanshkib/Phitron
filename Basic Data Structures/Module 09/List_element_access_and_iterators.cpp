#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};

    cout << l.front() << endl;
    cout << l.back() << endl;

    cout << "3rd indx:" << *next(l.begin(), 2) << endl;

    cout << *l.begin() << endl;

    return 0;
}