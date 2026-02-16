#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
         if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
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