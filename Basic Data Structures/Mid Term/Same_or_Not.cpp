#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
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