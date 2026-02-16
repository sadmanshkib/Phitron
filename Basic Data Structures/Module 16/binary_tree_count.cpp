#include<bits/stdc++.h>
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
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if(root)
       q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        ///kaj
        int l,r;
        cin >> l >> r;

        Node* l_child, *r_child;

        if(l!= -1)
            l_child = new Node(l);
        else l_child = NULL;

        if(r!= -1)
            r_child = new Node(r);
        else r_child = NULL;

        p->left = l_child;
        p->right = r_child;


        //child push
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

// int count_nodes(Node* root)
// {
//     queue<Node*> q;
//     if(root == NULL)
//         {
//             cout << "Not A Tree." << endl;
//             return 0;
//         }
//     q.push(root);

//     int cnt=0;

//     while (!q.empty())
//     {
//         Node* front = q.front();
//         q.pop();

//         cnt++;

//         if(front->left)
//             q.push(front->left);
//         if(front->right)
//             q.push(front->right);
//     }
//     return cnt;
// }

int count_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}

int main()
{
    Node* root = binary_tree_input();
    cout << count_nodes(root) << endl;
    return 0;
}