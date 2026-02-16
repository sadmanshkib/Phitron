#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v ={1,2,3,4,5,6};
    // vector<int> v2;
    // v2= v;
   
   


    // v.pop_back();
    // v.pop_back();

    // v.insert(v.begin()+2,300);
    // vector<int> v2 ={10,20,30};
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.erase(v.begin()+3);
    // v.erase(v.begin()+2,v.end()-1);
    // v.erase(v.begin()+1,v.begin()+5);


    // vector<int> v ={1,2,3,4,5,3,6};

    // replace(v.begin(),v.end(),3,99);
    // auto it = find(v.begin(),v.end(),9);

     // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    //  (it==v.end()) ? cout << "Not Found." << endl : cout << "Found : " << *it << endl; 
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }


    // cout << v[2] << endl;
    // cout << v[v.size()-1] << endl;
    // cout << v.back() << endl;
    // cout << v.front() << endl;

    vector<int> v ={1,2,3,4,5,3,6};
    v.insert(v.begin()+3, 20);
    for(auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}