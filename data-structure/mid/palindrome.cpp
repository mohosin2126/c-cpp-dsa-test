#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* pre;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int value;
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
    }

    if (head == NULL || head->next == NULL) {
        cout << "YES" << endl;
    } else {
        Node* left = head;
        Node* right = tail;
        int palindrome = 1;

        while (left != right && left->pre != right) {
            if (left->val != right->val) {
                palindrome = 0;
                break;
            }
            left = left->next;
            right = right->pre;
        }

        if (palindrome == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

