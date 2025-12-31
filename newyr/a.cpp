#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<pair<int, int>>> &adj, int s, int d, int m)
{
    int ind = m;
    int balance = 2 * m;
    vector<vector<int>> dist(d + 1, vector<int>(2 * m + 1, INT_MAX));
    dist[s][ind] = 0;
    queue<pair<int, int>> q;
    q.push({s, ind});

    while (!q.empty())
    {
        auto [v, b] = q.front();
        q.pop();
        if (v == d && b == ind)
        {
            cout << dist[v][b] << '\n';
            return;
        }
        for (auto &[x, i] : adj[v])
        {
            int nb = i + b;
            if (nb < 0 || nb > balance) continue;
            if (dist[x][nb] == INT_MAX)
            {
                dist[x][nb] = dist[v][b] + 1;
                q.push({x, nb});
            }
        }
    }
    cout << -1 <<'\n';
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n + 1);
    int t = m;
    while (m--)
    {
        int s, e;
        char c;
        cin >> s >> e >> c;
        int d = (c == 'R') ? 1 : -1;
        adj[s].push_back({e, d});
        adj[e].push_back({s, d});
    }
    bfs(adj, 1, n, t);
    return 0;
}