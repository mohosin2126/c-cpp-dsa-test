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

    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            current->left = new Node(l);
            q.push(current->left);
        }

        if (r != -1)
        {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    Node *root = InputTree();

    int height = max_height(root);
    int totalNodes = countNodes(root);

    int expectedNodes = pow(2, height) - 1;

    if (totalNodes == expectedNodes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
