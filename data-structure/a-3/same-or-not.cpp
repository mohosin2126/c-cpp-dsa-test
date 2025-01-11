#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }

    bool is_same = true;
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            is_same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (is_same) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
