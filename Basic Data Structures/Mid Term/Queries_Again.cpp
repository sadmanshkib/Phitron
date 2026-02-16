#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
};
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = head->prev;
}

void insert_at_indx(Node *tmp, int indx, int val)
{
    Node *newnode = new Node(val);

    for (int i = 0; i < indx-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

void print_l2r(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_r2l(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int sz = 0;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int indx, val;
        cin >> indx >> val;
        if (indx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (sz == indx)
        {
            sz++;
            insert_at_tail(head, tail, val);

            cout << "L -> ";
            print_l2r(head);
            cout << "R -> ";
            print_r2l(tail);
        }
        else
        {

            if (indx == 0)
            {
                sz++;
                insert_at_head(head, val);
                cout << "L -> ";
                print_l2r(head);
                cout << "R -> ";
                print_r2l(tail);
            }
            else
            {
                sz++;
                insert_at_indx(head, indx, val);
                cout << "L -> ";
                print_l2r(head);
                cout << "R -> ";
                print_r2l(tail);
            }
        }
    }

    return 0;
}