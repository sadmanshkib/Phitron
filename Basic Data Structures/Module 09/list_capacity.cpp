#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={90,50,100};
    list<int> l2(v.begin(),v.end());

    //  l2.clear();
    if(l2.empty())
    {
        cout << "Empty" << endl;
    }

    // cout << l2.size() << endl;
    // cout << l2.max_size() << endl;

    // l2.resize(2);
    l2.resize(5,9);

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