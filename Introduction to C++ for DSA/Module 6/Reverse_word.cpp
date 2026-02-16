#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string words;
    ss >> words;
    reverse(words.begin(),words.end());
    cout << words;
    while (ss >> words)
    {
        
        reverse(words.begin(),words.end());
        cout << " " << words;
    }
    
    return 0;
}