#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l ={20,30,90,40,50,60,90};
    list<int> l2 ={100,200,300};

    cout << "nth value: " << *next(l.begin(),3) << endl;

    // l.insert(next(l.begin(),3),999);
    // l.erase(next(l.begin(),3));
    // l.erase(next(l.begin(),2),next(l.begin(),5));

    // replace(l.begin(),l.end(),90,666);

    auto it = find(l.begin(),l.end(),66);
    if(it==l.end())
    {
        cout << "Nor found." <<endl;
    }
    else
    {
        cout << "found." << endl;
    }

    for(int val:l)
    {
        cout << val << endl;
    }
    return 0;
}