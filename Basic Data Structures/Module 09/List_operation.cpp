#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,10,40,50,20,60,60,10};

    // l.remove(10);
    // l.sort();
    // l.sort(greater<int>());

    l.sort();
    l.unique();//must be sorted;

    l.reverse();

    for(int val : l)
    {
        cout << val << endl;
    }
    
    return 0;
}