#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<ll>a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
            a[i]+=a[i]*k;
        }
        for(auto& x:a) cout << x << ' ';
        cout << '\n';
    } return 0;
}