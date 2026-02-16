#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "Hi welcome to the world.";

    s.resize(30,'#');
    cout << s.size() << endl;
    // s.clear();
    
    cout << s << endl;
    if(s.empty()==true)
    {
        cout << "this string is empty";
    }
    else
    {
        cout << "This string is not empty";
    }
    
    // cout << s.max_size() << endl;


    return 0;
}