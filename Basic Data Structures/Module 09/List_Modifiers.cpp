#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l ={20,30,90};
    list<int> l2 ={100,200,300};

    // l.assign(l2.begin(),l2.end());
    l.push_back(500);
    l.push_back(600);
    l.push_front(900);

    // l.pop_back();
    // l.pop_front();

    cout << "nth value: " << *next(l.begin(),3) << endl;

    l.insert(next(l.begin(),3),999);

    for(int val:l)
    {
        cout << val << endl;
    }
    return 0;
}