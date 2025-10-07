#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<pair<int,int>>>adj;
vector<bool>vis;
vector<tuple<int,int,int>>tree_edges;


void dfs(int u) {
    vis[u]=true;
    for(auto &[v,num]:adj[u]) {
        if(!vis[v]) {
            tree_edges.push_back({u,v,num});
            dfs(v);
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >>n;
    vector<vector<int>>d(n+1);
    for(int i=1;i<=n;i++) {
        int m; cin >>m;
        d[i].resize(m);
        for(int j=0;j<m;j++) {
            cin >> d[i][j];
        }
    }


    unordered_map<int,vector<int>>mp;
    for(int i=1;i<=n;i++) {
        for(int x:d[i]) {
            mp[x].push_back(i);
        }
    }

    adj.assign(n+1,vector<pair<int,int>>());
    for(auto& k:mp) {
        int num = k.first;
        auto& vec = k.second;
        if(vec.size()<2) continue;
        int rep = vec[0];
        for(int i=1;i<vec.size();i++) {
            int u = rep, v = vec[i];
            adj[u].push_back({v,num});
            adj[v].push_back({u,num});
        }
    }
    vis.assign(n+1,false);
    dfs(1);

    bool connected = true;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) connected = false;
    }
    if (!connected) {
        cout << "impossible\n";
    } else {
        for (auto &[u,v,num] : tree_edges) {
            cout << u << " " << v << " " << num << "\n";
        }
    }
    return 0;
}