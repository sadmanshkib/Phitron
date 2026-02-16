#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int id;
    int roll;
    double gpa;
    // student(int i,int r,double g)
    // {
    //     id=i;
    //     roll=r;
    //     gpa=g;
    // }

};

int main()
{
    // student a(3297,2849445,4.83);
    // student b(3727,2843685,5.00);

    // a.id=214;
    // a.roll=23084;
    // a.gpa=5.00;
    student a,b;
    cin >> a.id >> a.roll >> a.gpa;
    cin >> b.id >> b.roll >> b.gpa;
    
    cout << a.id << " " << a.roll << " " << a.gpa << endl;
    cout << b.id << " " << b.roll << " " << b.gpa << endl;
    return 0;
}