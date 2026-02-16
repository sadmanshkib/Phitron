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

void level_order(Node *root,int lev)
{
    if(root == NULL)
    {
        cout << "Invalid";
        return;
    }
    queue<Node *> q;
    q.push(root);
    int clev = 0;

    while (!q.empty())
    {
        int sz = q.size();
        if (clev == lev)
        {
            for (int i = 0; i < sz; i++)
            {
                Node *f = q.front();
                q.pop();
                cout << f->val << " ";
            }
            return;
        }

        for (int i = 0; i < sz; i++)
        {
            Node *f = q.front();
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        clev++;

    }
    cout << "Invalid";
}

int main()
{
    Node* root = binary_tree();
    int lev;
    cin >> lev;
    level_order(root,lev);
    return 0;
}