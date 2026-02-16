#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    student x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i].nm >> x[i].cls >> x[i].s >> x[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        student y[1];

        y[i].s = x[i].s;
        x[i].s = x[n - 1 - i].s;
        x[n - 1 - i].s = y[i].s;
    }

    for (int i = 0; i < n; i++)
    {
        cout << x[i].nm << " " << x[i].cls << " " << x[i].s << " " << x[i].id << endl;
    }

    return 0;
}