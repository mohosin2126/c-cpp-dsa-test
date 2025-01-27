#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
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

int main() {
    Node *root = InputTree();
    int X;
    cin >> X;

    if (root == NULL) {
        cout << "Invalid" << endl;
        return 0;
    }

    queue<Node *> q;
    q.push(root);
    int level = 0;

    while (!q.empty()) {
        int size = q.size();

        if (level == X) {
            for (int i = 0; i < size; i++) {
                Node *current = q.front();
                q.pop();
                cout << current->val << " ";
            }
            cout << endl;
            return 0;
        }

        for (int i = 0; i < size; i++) {
            Node *current = q.front();
            q.pop();

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }

        level++;
    }

    cout << "Invalid" << endl;
    return 0;
}
