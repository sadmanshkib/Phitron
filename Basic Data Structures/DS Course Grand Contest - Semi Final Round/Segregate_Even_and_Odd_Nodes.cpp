#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    list<int> l1;
    list<int> l2;
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2==0)
        {
            l1.push_back(x);
        }
        else
        {
            l2.push_back(x);
        }
    }

    while (l2.empty() != true)
    {
        l1.push_back(l2.front());
        l2.pop_front();
    }
    
    
   
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    } 
    cout << endl;
      
    
    return 0;
}