#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(student l, student r)
{
    if ((l.math_marks + l.eng_marks) == (r.math_marks + r.eng_marks))
    {
        return (l.id < r.id) ? true : false;
    }
    else
    {
        return ((l.math_marks + l.eng_marks) > (r.math_marks + r.eng_marks)) ? true : false;
    }
};

int main()
{
    int n;
    cin >> n;
    student x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i].nm >> x[i].cls >> x[i].s >> x[i].id >> x[i].math_marks >> x[i].eng_marks;
    }

    sort(x, x + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << x[i].nm << " " << x[i].cls << " " << x[i].s << " " << x[i].id << " " << x[i].math_marks << " " << x[i].eng_marks << endl;
    }

    return 0;
}