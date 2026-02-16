#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
  
    tail->next=newNode;
    // tail = newNode; 
    tail = tail->next;
   // bth are same
};

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
};
void delete_at_tail(Node* &head, Node* &tail, int ind)
{
    Node* tmp= head;
    for (int i = 1; i < ind; i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    cout << "before " << tail->val << endl;
    delete_at_tail(head,tail, 3);
    print_linked_list(head); 
    cout << "after delete tail: " << tail->val << endl;
    return 0;
}