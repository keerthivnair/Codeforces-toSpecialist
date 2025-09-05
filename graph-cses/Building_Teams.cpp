#include <bits/stdc++.h>
using namespace std;

bool dfs(int i, vector<vector<int>>& edges, vector<bool>& visited, vector<char>& colors) {
    stack<pair<int,char>> st;
    st.push({i,'R'});
    colors[i] = 'R';
    visited[i] = true;

    while (!st.empty()) {
        auto [u,c] = st.top();
        st.pop();
        for (auto& v : edges[u]) {
            if (colors[v] == c) {
                return false; 
            }
            if (colors[v] == 'W') {
                char nc = (c == 'R' ? 'B' : 'R');
                colors[v] = nc;
                visited[v] = true;
                st.push({v,nc});
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m; 
    cin >> n >> m;
    vector<vector<int>> edges(n);

    for (int i = 0; i < m; i++) {
        int x,y; 
        cin >> x >> y;
        x--, y--;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    vector<char> colors(n,'W');   
    vector<bool> visited(n,false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (!dfs(i, edges, visited, colors)) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for (auto& x : colors) {
        cout << (x == 'R' ? 1 : 2) << ' ';
    }
    cout << '\n';

    return 0;
}
