#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int n = x;
    if (n >= 48 && n <= 57)
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA" << endl;
        if (n >= 65 && n <= 90)
        {
            cout << "IS CAPITAL" << endl;
        }
        if (n >= 97 && n <= 122)
        {
            cout << "IS SMALL" << endl;
        }
    }
    
    return 0;
}