#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    student(string name,int roll,int math,int english)
    {
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }
    void result()
    {
        cout << "The total marks of " << name << " is = " << math+english << endl;

    }

};
int main()
{
    student sadman("sadman",1241,100,98);
    student tanvir("tanvir",1241,98,98);
    student bayzid("bayzid",1241,98,99);

    // cout << sadman.name << " " << sadman.roll << " " << sadman.math << " " << sadman.english << endl;
    sadman.result();
    bayzid.result();
    tanvir.result();
    
    return 0;
}