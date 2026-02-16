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

void insert_head(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    // head = newnode;
    head = head->prev;
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

    insert_head(head,tail,90);
    insert_head(head,tail,900);
    print_forward(head);
    return 0;
}