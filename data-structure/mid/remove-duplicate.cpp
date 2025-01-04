#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> num;
    int x;
    
    while (cin >> x && x != -1) {
        num.push_back(x);
    }

    num.sort();
    num.unique();

    for (int val : num) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
