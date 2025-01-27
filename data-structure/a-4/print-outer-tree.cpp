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

Node *InputTree()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
        return NULL;

    root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }

        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

void LeftNodes(Node *root, vector<int> &leftNodes)
{
    while (root != NULL)
    {
        leftNodes.push_back(root->val);
        if (root->left != NULL)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
}

void RightNodes(Node *root, vector<int> &rightNodes)
{
    while (root != NULL)
    {
        rightNodes.push_back(root->val);
        if (root->right != NULL)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
}

int main()
{
    Node *root = InputTree();
    if (root == NULL)
    {
        return 0;
    }
    vector<int> leftNodes, rightNodes;
    LeftNodes(root->left, leftNodes);
    for (auto val : leftNodes)
    {
        cout << val << " ";
    }

    cout << root->val << " ";
    RightNodes(root->right, rightNodes);
    reverse(rightNodes.begin(), rightNodes.end());
    for (auto it = rightNodes.rbegin(); it != rightNodes.rend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
