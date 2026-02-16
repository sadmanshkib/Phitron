#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> weblist;
    string address;

    while (cin >> address)
    {
        if (address == "end")
            break;
        weblist.push_back(address);
    }

    auto current_address = weblist.begin();

    int action;
    cin >> action;

    while (action--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string find_url;
            cin >> find_url;

            bool flag = false;
            for (auto it = weblist.begin(); it != weblist.end(); it++)
            {
                if (*it == find_url)
                {
                    current_address = it;
                    cout << *current_address << endl;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (current_address == weblist.end() || next(current_address) == weblist.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address = next(current_address);
                cout << *current_address << endl;
            }
        }
        else if (command == "prev")
        {
            if (current_address == weblist.begin() )
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address = prev(current_address);
                cout << *current_address << endl;
            }
        }
    }

    return 0;
}
