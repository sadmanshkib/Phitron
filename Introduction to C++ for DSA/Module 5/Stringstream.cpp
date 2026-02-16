#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hi I'm Sadman Shkib.";
    stringstream ss(s);
    string words;

    // ss >> words;
    // cout << words << endl;
    // ss >> words;
    // cout << words << endl;
    // ss >> words;
    // cout << words << endl;
    // ss >> words;
    // cout << words << endl;
    // ss >> words;
    // cout << words << endl;
    while (ss >> words)
    {
        cout << words << endl;
    }
    
    return 0;
}