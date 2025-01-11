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

    int mismatch_found = 0; 
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            mismatch_found = 1;
            break;
        }
        st.pop();
        q.pop();
    }

    if (mismatch_found == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
