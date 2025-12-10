#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bfs(ll c_i,ll v_i,ll c_f,ll v_f,vector<int>&ans) {
    queue<pair<ll,ll>> q;
    map<pair<ll,ll>, pair<pair<ll,ll>, int>> parent;
    set<pair<ll,ll>> vis;
    q.push({c_i,v_i});
    vis.insert({c_i,v_i});
    parent[{c_i,v_i}] = {{-1,-1}, -1};
    while(!q.empty()) {
        auto [c,v] = q.front(); q.pop();
        if(c == c_f && v == v_f) break;
        if(c > 1 && c % 2 == 0) {
            ll nc = c / 2;
            ll nv = v + c / 2;
            if(vis.find({nc,nv}) == vis.end()) {
                vis.insert({nc,nv});
                q.push({nc,nv});
                parent[{nc,nv}] = {{c,v}, 1};
            }
        }
        if(v > 1 && v % 2 == 0) {
            ll nc = c + v / 2;
            ll nv = v / 2;
            if(vis.find({nc,nv}) == vis.end()) {
                vis.insert({nc,nv});
                q.push({nc,nv});
                parent[{nc,nv}] = {{c,v}, 2};
            }
        }
    }
    pair<ll,ll> cur = {c_f,v_f};
    while(parent[cur].second != -1) {
        ans.push_back(parent[cur].second);
        cur = parent[cur].first;
    }
    reverse(ans.begin(), ans.end());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int k;
        ll x;
        cin >> k >> x;
        ll c_i = 1LL << k;
        ll v_i = 1LL << k;
        ll c_f = x;
        ll v_f = 2 * v_i - x;
        vector<int> ans;
        bfs(c_i, v_i, c_f, v_f, ans);
        cout << ans.size() << "\n";
        for(int i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
