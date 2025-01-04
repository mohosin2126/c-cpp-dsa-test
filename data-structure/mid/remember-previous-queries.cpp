#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> my_list;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            list<int> temp_list = {v};
            for (int val : my_list) {
                temp_list.push_back(val);
            }
            my_list = temp_list;
        } else if (x == 1) {
            my_list.push_back(v);
        } else if (x == 2) {
            if (v >= 0 && v < my_list.size()) {
                list<int> temp_list;
                int index = 0;
                for (int val : my_list) {
                    if (index != v) {
                        temp_list.push_back(val);
                    }
                    index++;
                }
                my_list = temp_list;
            }
        }

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

    return 0;
}
