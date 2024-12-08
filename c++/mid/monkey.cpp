#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        char word[100000];
        int j = 0;
        for (char c : s) {
            if (c != ' ') {
                word[j++] = c;
            }
        }
        word[j] = '\0';
        sort(word, word + strlen(word));
        cout << word << endl;
    }
    return 0;
}