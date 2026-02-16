#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    int cls;
    double gpa;
    student(int i,int c,double g)
    {
        id=i;
        cls=c;
        gpa=g;
    }
};

student inp()
{
    student a(248,23535,4.83);
    return a;
}
 
int main()
{
    
    student o =inp();
    cout << o.id << " " << o.cls << " " << o.gpa << endl;
    
    return 0;
}