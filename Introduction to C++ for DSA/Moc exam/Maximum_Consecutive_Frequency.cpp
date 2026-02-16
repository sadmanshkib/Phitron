#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if(j==n-1)
                {
                    count++;
                    break;
                }
            else if (a[i] == a[j])
            {
                count++;
                cout << count << endl;
                
            }
            else
            {
                cout << a[i] << " " << a[j-1]<< " " << j << endl;
                i = j-1;
                count=1;
                break;
            }
        }
    }

    return 0;
}