#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* binary_tree_input()
{
    Node* root;
    int val;
    cin >> val;

    if(val == -1)
    {
        root = NULL;
        return root;
    }
    else
        root = new Node(val);
    
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // node pop
        Node* f = q.front();
        q.pop();

        // node work
        Node* l_child,*r_child;
        int l,r;
        cin >> l >> r;        

        if(l == -1)
            l_child = NULL;
        else l_child = new Node(l);

        if(r == -1)
            r_child = NULL;
        else r_child = new Node(r);

        f->left = l_child;
        f->right = r_child;

        // assign child
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return root;
}

int count_leaf_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l+r;
}

int main()
{
    Node* root = binary_tree_input();

    cout << count_leaf_nodes(root) << endl;
    return 0;
}