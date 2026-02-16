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

void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;

    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}
int main()
{
    Node *head = new Node(20);
    Node *a = new Node(50);
    Node *tail = new Node(70);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_tail(head, tail);
    delete_tail(head, tail);
    delete_tail(head, tail);

    print_forward(head);
    return 0;
}