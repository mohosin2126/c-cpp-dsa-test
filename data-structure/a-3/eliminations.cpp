#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        stack<char> st;
        
        for (char c : S) {
            if (c == '1' && !st.empty() && st.top() == '0') {
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        if (st.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
