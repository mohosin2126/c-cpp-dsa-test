#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, E;
    cin >> N >> E;

    const long long INF = 1000000000000000000LL;

    vector<vector<long long>> dist(N + 1, vector<long long>(N + 1, INF));

    for (int i = 1; i <= N; i++)
    {
        dist[i][i] = 0;
    }

    for (int i = 0; i < E; i++)
    {
        int A, B, W;
        cin >> A >> B >> W;
        dist[A][B] = min(dist[A][B], (long long)W);
    }

    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            if (dist[i][k] == INF)
                continue;
            for (int j = 1; j <= N; j++)
            {
                if (dist[k][j] == INF)
                    continue;
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X < 1 || X > N || Y < 1 || Y > N || dist[X][Y] == INF)
            cout << -1 << "\n";
        else
            cout << dist[X][Y] << "\n";
    }

    return 0;
}