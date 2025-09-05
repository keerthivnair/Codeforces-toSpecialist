#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> edges;
vector<int> parent, res;
vector<bool> visited;

bool dfs(int u, int p) {
    visited[u] = true;
    parent[u] = p;

    for (int v : edges[u]) {
        if (v == p) continue; 
        if (!visited[v]) {
            if (dfs(v, u)) return true;
        } else {
            // cycle found
            res.push_back(v);
            int curr = u;
            while (curr != v) {
                res.push_back(curr);
                curr = parent[curr];
            }
            res.push_back(v);
            reverse(res.begin(), res.end());
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    edges.assign(n, {});
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    visited.assign(n, false);
    parent.assign(n, -1);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (dfs(i, -1)) {
                cout << res.size() << "\n";
                for (int x : res) cout << x+1 << " ";
                cout << "\n";
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
