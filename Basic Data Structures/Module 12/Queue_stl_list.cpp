#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> q;
    void push(int val)
    {
        q.push_back(val);
    }

    void pop()
    {
        q.pop_front();
    }

    int front()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }

    int back()
    {
        return q.back();
    }

    int size()
    {
        return q.size();
    }
};

int main()
{

    myQueue qu;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    cout << qu.front() << " " << qu.back() << " " << qu.size() << endl;

    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}