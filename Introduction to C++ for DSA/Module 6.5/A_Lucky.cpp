#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char a[6]={0};
        for(int  j = 0; j < 6; j++)
        {
            cin >> a[j];
        }
        int left = a[0]+a[1]+a[2]-144;
        int right = a[3]+a[4]+a[5]-144;
        if(left==right)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    
    return 0;
}