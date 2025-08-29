#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int r = 0;
        for(int i =1;i<n;i++) {
            if((a[i]%2==1 && a[i-1]%2==1) || (a[i]%2==0 && a[i-1]%2==0)) {
                r++;
            }
        }
        cout << r<<'\n';
    } return 0;
}