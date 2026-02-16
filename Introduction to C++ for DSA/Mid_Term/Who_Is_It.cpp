#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;
        int max = 0;
        if (a.total_marks >= b.total_marks && a.total_marks >= c.total_marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if (b.total_marks > a.total_marks && b.total_marks >= c.total_marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
        }
    }

    return 0;
}