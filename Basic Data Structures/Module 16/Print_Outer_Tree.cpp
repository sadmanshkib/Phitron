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

Node *binary_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
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

void left_side(Node *root)
{
    Node *curr = root->left;
    vector<int> temp;

    while (curr)
    {
        temp.push_back(curr->val);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }

    reverse(temp.begin(), temp.end());

    for (int x : temp)
        cout << x << " ";
}

void right_side(Node *root)
{
    Node *curr = root->right;

    while (curr)
    {
        cout << curr->val << " ";
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
}

int main()
{
    Node *root = binary_tree();

    left_side(root);
    cout << root->val << " ";
    right_side(root);
    return 0;
}