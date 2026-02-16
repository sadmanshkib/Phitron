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

void delete_any_pos(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = deletenode->next;
    // tmp->next = tmp->next->next;

    deletenode->next->prev=tmp;
    // tmp->next->prev= tmp;
    
    delete deletenode;
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

    delete_any_pos(head, tail, 1);

    print_forward(head);
    return 0;
}