#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> addresses;
    string address;

    while (cin >> address && address != "end") {
        addresses.push_back(address);
    }

    int current_index = 0;

    int Q;
    cin >> Q;

    while (Q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string addr;
            cin >> addr;

            int index = -1;
            for (int i = 0; i < addresses.size(); i++) {
                if (addresses[i] == addr) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                current_index = index;
                cout << addresses[current_index] << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } 
        else if (command == "next") {
            if (current_index + 1 < addresses.size()) {
                current_index++;
                cout << addresses[current_index] << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } 
        else if (command == "prev") {
            if (current_index - 1 >= 0) {
                current_index--;
                cout << addresses[current_index] << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
