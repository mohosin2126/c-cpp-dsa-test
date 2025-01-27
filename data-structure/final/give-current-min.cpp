#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    while (q--)
    {
        int val;
        cin >> val;
        min_heap.push(val);
    }

    int m;
    cin >> m;

    while (m--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            int val;
            cin >> val;
            min_heap.push(val);
            cout << min_heap.top() << endl;
        }
        else if (type == 1)
        {
            if (!min_heap.empty())
            {
                cout << min_heap.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (type == 2)
        {
            if (!min_heap.empty())
            {
                min_heap.pop();
                if (!min_heap.empty())
                {
                    cout << min_heap.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
