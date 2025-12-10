#include <bits/stdc++.h>
using namespace std;

struct Node {
    int s, e;
    vector<char> route;
};

bool bfs(vector<vector<char>> &grid, int start, int end, vector<char> &r) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
    vector<char> moves = {'R','L','D','U'};

    queue<Node> q;
    q.push({start, end, {}});
    visited[start][end] = true;

    while (!q.empty()) {
        auto [s, e, route] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = s + d[i].first;
            int nc = e + d[i].second;

            if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
            if (visited[nr][nc]) continue;
            if (grid[nr][nc] == '#') continue;

            vector<char> newRoute = route;
            newRoute.push_back(moves[i]);

            if (grid[nr][nc] == 'B') {
                r = newRoute;
                return true;
            }

            visited[nr][nc] = true;
            q.push({nr, nc, newRoute});
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));

    int startx, starty;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                startx = i;
                starty = j;
            }
        }
    }

    vector<char> r;
    if (bfs(grid, startx, starty, r)) {
        cout << "YES\n";
        cout << r.size() << '\n';
        for (auto &x : r) cout << x;
        cout << '\n';
    } else {
        cout << "NO\n";
    }
    return 0;
}
