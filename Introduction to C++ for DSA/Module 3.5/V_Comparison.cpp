#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin >> a >> s >> b;
    if(s=='>')
    {
        (a>b) ? cout << "Right": cout <<"Wrong";
    }
    if(s=='<')
    {
        (a<b) ? cout << "Right": cout <<"Wrong";
    }
    if(s=='=')
    {
        (a==b) ? cout << "Right": cout <<"Wrong";
    }

    return 0;
}