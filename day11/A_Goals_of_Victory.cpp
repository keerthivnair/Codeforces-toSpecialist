#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        vector<int>a(n-1);
        int sum = 0;
        for(auto& x:a) {
            cin >> x;
            sum+=x;
        }
        cout << -sum << '\n';
    } return 0;
}