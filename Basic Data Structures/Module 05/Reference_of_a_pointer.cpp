#include <bits/stdc++.h>
using namespace std;

// void fun(int* p)
// {
//     *p = 30;
//     cout << "In Fun : " << *p << endl;
// }

// void fun(int* &p)
// {
//     int y = 200;
//     p = &y;
//     cout << "In Fun : " << *p << endl;
// }

void fun(int* &p)
{
    p = NULL;
    cout << "In Fun : " << &p << endl;
}

int main()
{
    int x = 20;
    int* p = &x;
    fun(p);
    cout << "In Main: " << p << endl;
    return 0;
}