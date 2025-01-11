#include <bits/stdc++.h>
using namespace std;

class mystack {
public:
    vector<int> arr;

    void push(int val) {
        arr.push_back(val);
    }

    void pop() {
        if (!arr.empty())
            arr.pop_back();
    }

    int top() {
        if (!arr.empty())
            return arr.back();
        return -1;
    }

    int size() {
        return arr.size();
    }

    bool empty() {
        return arr.empty();
    }
};

class myqueue {
public:
    vector<int> arr;

    void push(int val) {
        arr.push_back(val);
    }

    void pop() {
        if (!arr.empty()) {
            for (int i = 0; i < arr.size() - 1; i++) {
                arr[i] = arr[i + 1];
            }
            arr.pop_back();
        }
    }

    int front() {
        if (!arr.empty())
            return arr[0];
        return -1;
    }

    int size() {
        return arr.size();
    }

    bool empty() {
        return arr.empty();
    }

    int back() {
        if (!arr.empty())
            return arr[arr.size() - 1];
        return -1;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    mystack s;
    myqueue q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (s.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }

    int isSame = 1;

    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            isSame = 0;
            break;
        }
        s.pop();
        q.pop();
    }

    if (isSame == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
