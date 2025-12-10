#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n;
        ll k; cin >> n >> k;
        vector<ll>s(n);
        vector<ll>t(n);
        for(int i=0;i<n;i++) {
            cin >> s[i];
        }
        for(int i=0;i<n;i++) {
            cin >> t[i];
        }
        multiset<int>ms_t;
        for(int i = 0;i<n;i++) {
            ms_t.insert(t[i]%k);
        }
        int f = 1;
        multiset<int>ms_s;
        for(int i=0;i<n;i++) {
           ll x = abs(s[i]-k);
           ll y = abs(s[i]-k);
           ms_s.insert(x%k);
           if(y!=x) ms_s.insert(y%k);
           if(ms_t.find(x%k)==ms_t.end() && ms_t.find(y%k)==ms_t.end() || ()) {
           f = 0;
            break;
           }
        }
        if(!f){
            cout << "NO \n";
        }
    } return 0;
}