#include<bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    students a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
   
    // int mn= INT_MAX;
    
    // for (int i = 0; i < n; i++)
    // {
    //     mn= min(a[i].marks,mn);
    // }
    // cout << mn << endl;

    students mn;
    mn.marks=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn= a[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    

    return 0;
}