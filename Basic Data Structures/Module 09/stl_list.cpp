#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l= {10, 20, 40 ,90};
    // list<int> l2(l);

    // int a[]={10,90,30,50};
    // list<int> l2(a,a+4);

    vector<int> v={90,50,100};
    list<int> l2(v.begin(),v.end());


    // for (auto it = l2.begin(); it !=l2.end(); it++ )
    // {
    //     cout << *it << endl;
    // }
    for( int val : l2)
    {
        cout << val << endl;
    }

    
    return 0;
}