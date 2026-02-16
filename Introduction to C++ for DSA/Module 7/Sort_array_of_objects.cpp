#include <bits/stdc++.h>
using namespace std;

class students
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(students l, students r)
{
    return l.marks < r.marks;
}

// bool cmp(students l, students r)
// {
//     if (l.marks > r.marks)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    int n;
    cin >> n;
    students a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
}