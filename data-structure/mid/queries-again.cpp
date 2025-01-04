#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> my_list;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x < 0 || x > my_list.size()) {
            cout << "Invalid" << endl;
        } else {
            list<int> temp_list;
            int index = 0;

            for (int val : my_list) {
                if (index == x) {
                    temp_list.push_back(v);
                }
                temp_list.push_back(val);
                index++;
            }
            if (index == x) {
                temp_list.push_back(v);
            }

            my_list = temp_list;

         
            cout << "L -> ";
            for (int val : my_list) {
                cout << val << " ";
            }
            cout << endl;

            cout << "R -> ";
            list<int> reversed_list;
            for (int val : my_list) {
                reversed_list.push_front(val);
            }
            for (int val : reversed_list) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
