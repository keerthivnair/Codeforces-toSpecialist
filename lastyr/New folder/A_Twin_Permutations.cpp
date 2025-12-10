#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>a(n);
        for(auto& x:a) cin >> x;
        vector<int>b(n);
        for(int i=0;i<n;i++) {
            b[i]= (n+1) - a[i];
        }
        for(auto& x:b) {
            cout << x <<' ';
        }
        cout << '\n';
    }
    return 0;
}