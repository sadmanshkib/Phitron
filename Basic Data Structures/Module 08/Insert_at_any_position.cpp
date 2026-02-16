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

void insert_any_pos(Node* head, int val,int pos)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    
    newnode->next=tmp->next;
    tmp->next->prev=newnode;

    tmp->next=newnode;
    newnode->prev=tmp;

    


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
    insert_any_pos(head,900,2);
    print_forward(head);

    return 0;
}