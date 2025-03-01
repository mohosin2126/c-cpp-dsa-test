#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> from(e), to(e), cost(e);
    for (int i = 0; i < e; i++)
    {
        cin >> from[i] >> to[i] >> cost[i];
    }

    int source;
    cin >> source;

    int t;
    cin >> t;

    const long long INF = 1e18;
    vector<long long> dist(n + 1, INF);
    dist[source] = 0;

    for (int i = 1; i < n; i++)
    {
        bool updated = false;
        for (int j = 0; j < e; j++)
        {
            if (dist[from[j]] != INF && dist[from[j]] + cost[j] < dist[to[j]])
            {
                dist[to[j]] = dist[from[j]] + cost[j];
                updated = true;
            }
        }
        if (!updated)
            break;
    }

    for (int j = 0; j < e; j++)
    {
        if (dist[from[j]] != INF && dist[from[j]] + cost[j] < dist[to[j]])
        {
            cout << "Negative Cycle Detected" << "\n";
            return 0;
        }
    }

    while (t--)
    {
        int dest;
        cin >> dest;
        if (dist[dest] == INF)
            cout << "Not Possible" << "\n";
        else
            cout << dist[dest] << "\n";
    }

    return 0;
}