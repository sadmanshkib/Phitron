#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    // tail=tail->next;
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
    Node* head = new Node(20);
    Node* a = new Node(50);
    Node* tail = new Node(70);

    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;

    insert_tail(head,tail,90);
    insert_tail(head,tail,100);
    print_forward(head);
    return 0;
}