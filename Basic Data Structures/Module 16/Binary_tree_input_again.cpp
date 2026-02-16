#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *binary_tree_input()
{
    int n;
    cin >> n;
    Node *root;
    if(n == -1)
        root = NULL;
    else
        root = new Node(n);

    queue<Node *> q;
    if(root != NULL)
    q.push(root);

    while (!q.empty())
    {
        // noton nood e push kore ber kore deya
        Node *f = q.front();
        q.pop();

        // kaj kora
        int l, r;
        cin >> l >> r;
        Node *l_child, *r_child;
        if (l != -1)
            l_child = new Node(l);
        else
            l_child = NULL;

        if (r != -1)
            r_child = new Node(r);
        else
            r_child = NULL;

        f->left = l_child;
        f->right = r_child;

        // child push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void level_order_print(Node *root)
{
    if(root == NULL)
    {
        cout << "No Tree.";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = binary_tree_input();
    level_order_print(root);

    return 0;
}