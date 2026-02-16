#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> s;

    void push(int val)
    {
        s.push_back(val);
    }

    void pop()
    {
        s.pop_back();
    }

    int top()
    {
        return s.back();
    }

    int size()
    {
        return s.size();
    }

    bool empty()
    {
        return s.empty();
    }  
};
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

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    } 
};

int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int flag = 1;
    if (m != n)
    {
        flag = 0;
    }
    else
    {
        while (!st.empty())
        {
            int a, b;
            a = st.top();
            b = q.front();
            if (a != b)
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}