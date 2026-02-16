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

Node* binary_tree()
{
    int val;
    cin >> val;

    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    

    queue<Node *> q;
    if(root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *newleft, *newright;

        if (l == -1)
            newleft = NULL;
        else
            newleft = new Node(l);

        if (r == -1)
            newright = NULL;
        else
            newright = new Node(r);

        p->left = newleft;
        p->right = newright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int count_node(Node *root)
{
    int cnt=0;
    if(root == NULL)
    {
        cout << "NO Tree.";
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f;
        f = q.front();
        q.pop();

        cnt++;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return cnt;
}

int main()
{
    Node* root = binary_tree();
    int nodesize = count_node(root);
    cout << nodesize << endl;
    return 0;
}