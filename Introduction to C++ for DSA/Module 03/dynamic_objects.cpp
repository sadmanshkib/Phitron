#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    int roll;
    double gpa;
    student(int id,int roll,double gpa)
    {
        this->id=id;
        (*this).roll=roll; //both are ok
        this->gpa=gpa;
    }
};



int main()
{
    student a(248,23535,4.83);
    student *b = new student(298,25535,5.00);    

    cout << a.id << " " << a.roll << " " << a.gpa << endl;
    cout << (*b).id << " " << b->roll << " " << b->gpa << endl;
    return 0;
}