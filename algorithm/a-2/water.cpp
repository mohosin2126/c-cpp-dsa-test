#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> height;
        priority_queue<int> pq;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            height.push_back(h);
            pq.push(h);
        }

        vector<int> v;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (height[j] == pq.top())
                {
                    v.push_back(j);
                }
            }
            pq.pop();
        }

        sort(v.begin(), v.end());
        cout << v[0] << " " << v[1] << endl;
    }

    return 0;
}