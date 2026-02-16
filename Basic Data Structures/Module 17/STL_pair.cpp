#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<any_data,any_datatype> p
    // pair<int,int> p;
    // pair<string,int> p;
    // // p = make_pair(54,39);
    // p = {"Hello",53};
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second; 
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl; 

    }
    
   
    return 0;
}