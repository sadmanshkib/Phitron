#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;

    // cin >> s; inly takes input without space
    // cin.getline(s,100); only works when string is defined by char s[100]

    // getline(cin,s); // only takes input from one line and take enter
    cin >> x;
    cin.ignore();
    getline(cin,s);


    cout << x << endl;
    cout << s << endl;
    return 0;
}