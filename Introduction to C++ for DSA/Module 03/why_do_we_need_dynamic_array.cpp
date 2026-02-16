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

student* inp()
{
    student a(248,23535,4.83);
    student* p = &a;
    return p;
}
 
int main()
{
    
    student* p =inp();
    cout << (*p).id << " " << p->cls << " " << p->gpa << endl;
    
    return 0;
}