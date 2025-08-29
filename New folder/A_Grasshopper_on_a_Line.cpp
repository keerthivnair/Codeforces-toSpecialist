#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n>>x;
        if(n%x != 0) {
            cout << 1 <<'\n';
            cout << n <<'\n';
        }
        else {
            cout << 2<<'\n';
            cout << x+1 <<' '<< n-x-1 <<'\n';
        }
    } return 0;
}