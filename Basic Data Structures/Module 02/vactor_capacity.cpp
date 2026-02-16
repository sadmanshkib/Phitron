#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // v.pop_back();
    // v.pop_back();

    cout << v.size() << endl; 
    cout << v.capacity() << endl;
    // v.clear();
    // v.resize(2);
    v.resize(20,3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}