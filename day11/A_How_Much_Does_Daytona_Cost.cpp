#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<int>a(n);
        int flag = 0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if (a[i]==k) {
                flag = 1;
            }
        }
        if (flag) cout << "YES" <<'\n';
        else {
            cout << "NO" <<'\n';
        }
    } return 0;
}