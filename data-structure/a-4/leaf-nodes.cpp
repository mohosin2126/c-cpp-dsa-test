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

void collectLeafNodes(Node *root, queue<int> &leaves)
{
    if (!root)
        return;

    if (!root->left && !root->right)
    {
        leaves.push(root->val);
    }

    collectLeafNodes(root->left, leaves);
    collectLeafNodes(root->right, leaves);
}

void sortLeafNodesDescending(queue<int> &leaves)
{
    vector<int> leafVector;
    while (!leaves.empty())
    {
        leafVector.push_back(leaves.front());
        leaves.pop();
    }

    int n = leafVector.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (leafVector[j] < leafVector[j + 1])
            {
                swap(leafVector[j], leafVector[j + 1]);
            }
        }
    }
    for (int val : leafVector)
    {
        leaves.push(val);
    }
}

void printLeafNodesDescending(Node *root)
{
    queue<int> leaves;
    collectLeafNodes(root, leaves);

    sortLeafNodesDescending(leaves);

    while (!leaves.empty())
    {
        cout << leaves.front() << " ";
        leaves.pop();
    }
    cout << endl;
}

int main()
{
    Node *root = InputTree();

    printLeafNodesDescending(root);

    return 0;
}
