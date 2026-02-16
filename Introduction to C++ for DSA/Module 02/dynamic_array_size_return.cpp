#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3];
    // for (int  i = 0; i < 3; i++)
    // {
    //     cin >> a[i];
    // }

    // int b[5];
    // for (int i = 0; i < 3; i++)
    // {
    //     b[i]=a[i];
    // }
    
    // b[3]=90;
    // b[4]=100;

    // for (int  i = 0; i < 5; i++)
    // {
    //     cout << b[i] << " ";
    // }

    int *a=new int[3];
    for (int  i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int*b =new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i]=a[i];
    }
    
    b[3]=90;
    b[4]=100;
    delete[] a;
    for (int  i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}