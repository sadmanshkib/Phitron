#include<bits/stdc++.h>
using namespace std;

// static ---

// int *p;

// void newf()
// {
//     int x=10;
//     p=&x;
//     cout << "nwef ->" << *p <<endl;
//     return;
// }
// int main()
// {
//     newf();
//     cout << "main ->" << *p <<endl;
//     return 0;
// }

// dynamic ---

int *p;

void newf()
{
    int *x= new int;
    *x =20;
    p=x;
    cout << "nwef ->" << *p <<endl;
    return;
}
int main()
{
    newf();
    cout << "main ->" << *p <<endl;
    return 0;
}