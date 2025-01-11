#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        queue<char> q;
        
        for (char c : S) {
            if (c == '1' && !q.empty() && q.back() == '0') {
                q.pop(); 
            } else {
                q.push(c);
            }
        }
        
        if (q.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
