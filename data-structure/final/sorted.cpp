#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        set<int> s;
        int n;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}