#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n,c; cin >> n>> c;
        vector<int>a(n);
        multiset<int>s;
        int count = 0;
        for(int i =0;i<n;i++) {
            cin >> a[i];
            if(a[i] > c) {
                count ++;
            }
            else {
                s.insert(a[i]);
            }
        }
        while(!s.empty()) {
            auto it = prev(s.end());
            s.erase(it);
            vector<int>remove;
            vector<int>add;
            for(auto i = s.rbegin();i!=s.rend();i++) {
                int val = *i * 2;
                if(val>c) {
                    count++;
                    remove.push_back(*i);
                }
                else {
                    add.push_back(val);
                    remove.push_back(*i);
                }
            }

            for(auto val:remove) {
                s.erase(s.find(val));
            }

            for(auto val:add) {
                s.insert(val);
            }
        }
        cout << count<<'\n';
    }
    return 0;
}